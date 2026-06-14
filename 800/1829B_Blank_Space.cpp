#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n; 
        cin>>n;
        int cnt=0, maxi= INT_MIN;;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(a==0) cnt++;
            maxi= max(maxi, cnt);
             if(a==1) cnt=0;
        }
        cout<<maxi<<endl;
    }
    return 0;
}