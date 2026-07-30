#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int cnt=0;
        bool flag=true;
        for(int i=n-1; i>0 && flag; i--){
           while(a[i]<=a[i-1]){
            
            if(a[i-1]==0 ){
               flag=false;
                break;
            }
            cnt++;
            a[i-1]/=2;
           }
        }
        if(flag)
          cout << cnt << endl;
        else
          cout << -1 << endl;
    }
}