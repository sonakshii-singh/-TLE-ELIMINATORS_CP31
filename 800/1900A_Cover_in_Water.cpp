#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool found = false;
        int dots = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') dots++;
        }

        for (int i = 0; i + 2 < n; i++) {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                found = true;
                break;
            }
        }

        cout << (found ? 2 : dots) << endl;
    }
}