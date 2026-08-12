#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n, x, sum = 0, maxi = 0;

        cin >> n >> x;

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;

            maxi += (a + x - 1) / x;
            sum += a;
        }

        long long mini = (sum + x - 1) / x;

        cout << mini << " " << maxi <<endl;
    }
}