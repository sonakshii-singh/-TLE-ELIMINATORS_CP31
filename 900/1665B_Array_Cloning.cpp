#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, int> mp;
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
            maxi = max(maxi, mp[x]);
        }

        int ans = 0;
        int have = maxi;

        while (have < n) {
            ans++;                  

            int need = n - have;    
            int can = have;         

            int add = min(need, can);

            ans += add;             
            have += add;           
        }

        cout << ans << endl;
    }

    return 0;
}