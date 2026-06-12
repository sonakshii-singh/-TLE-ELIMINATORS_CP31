#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool sorted = true;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (!sorted) {
            cout << 0 << endl;
            continue;
        }

        int mini = INT_MAX;

        for (int i = 0; i < n - 1; i++) {
            mini = min(mini, a[i + 1] - a[i]);
        }

        cout << mini / 2 + 1 << endl;
    }
}