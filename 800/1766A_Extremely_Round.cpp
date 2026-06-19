#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> round_nums;

    for (int i = 1; i <= 100000; i *= 10) {
        for (int  j= 1; j <= 9; j++) {
            round_nums.push_back(j * i);
        }
    }

    sort(round_nums.begin(), round_nums.end());

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = upper_bound(round_nums.begin(),
                              round_nums.end(),
                              n)
                  - round_nums.begin();

        cout << ans << endl;
    }

    return 0;
}