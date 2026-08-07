#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<int> left(n + 1), right(n + 2);

        left[1] = 1;
        for (int i = 2; i <= n; i++) {
            if (a[i] < a[left[i - 1]])
                left[i] = i;
            else
                left[i] = left[i - 1];
        }

        right[n] = n;
        for (int i = n - 1; i >= 1; i--) {
            if (a[i] < a[right[i + 1]])
                right[i] = i;
            else
                right[i] = right[i + 1];
        }

        bool flag = false;

        for (int j = 2; j <= n - 1; j++) {
            int i = left[j - 1];
            int k = right[j + 1];

            if (a[i] < a[j] && a[k] < a[j]) {
                cout << "YES"<<endl;
                cout << i << " " << j << " " << k << "\n";
                flag = true;
                break;
            }
        }

        if (!flag)
            cout << "NO"<<endl;
    }

    return 0;
}