#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        int cnt=0;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==2) cnt++;
        }
        if(cnt==0) cout<<1<<endl;
        else if(cnt%2==1) cout<<-1<<endl;
        else {
            int ind=0;
            int cnt2= cnt/2;
            int cnt1=0;
            for(int i=0; i<n; i++){
                 
                 if(a[i]==2){
                    cnt1++;
                    if(cnt1==cnt2) {
                        ind=i+1;
                        break;
                    }
                 }
            }
            cout<<ind<<endl;
        }
       
    }
}