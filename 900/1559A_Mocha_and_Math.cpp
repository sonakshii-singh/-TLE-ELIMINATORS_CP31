#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin>>n;
        long long total_and;
        cin>>total_and;
        for(int i=1; i<n; i++){
            long long x;
            cin>>x;
            total_and= total_and & x;
        }
        cout<<total_and<<endl;
    }
}