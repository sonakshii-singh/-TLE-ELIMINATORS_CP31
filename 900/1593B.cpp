#include <bits/stdc++.h>
using namespace std;

int solve(string s, string t) {
    int n = s.size();

    int j = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == t[1]) {
            j = i;
            break;
        }
    }

    if (j == -1) return INT_MAX;

    int pos = -1;
    for (int i = j - 1; i >= 0; i--) {
        if (s[i] == t[0]) {
            pos = i;
            break;
        }
    }

    if (pos == -1) return INT_MAX;

    return (n - j - 1) + (j - pos - 1);
}

int main() {
   
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int ans = INT_MAX;

        ans = min(ans, solve(s, "00"));
        ans = min(ans, solve(s, "25"));
        ans = min(ans, solve(s, "50"));
        ans = min(ans, solve(s, "75"));

        cout << ans << endl;
    }

    return 0;
}