#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        int m = n * k;
        vector<long long> a(m);

        for (int i = 0; i < m; i++)
            cin >> a[i];

        int right = n - (n + 1) / 2;
        int step = right + 1;

        int idx = m - right - 1;

        long long ans = 0;

        for (int i = 0; i < k; i++) {
            ans += a[idx];
            idx -= step;
        }

        cout << ans << endl;
    }

    return 0;
}