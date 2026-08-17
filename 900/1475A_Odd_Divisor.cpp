#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        long long n;
        cin>>n;
        if ((n & (n - 1)) == 0)
             cout << "NO"<<endl;
       else
            cout << "YES"<<endl; 

    }
}