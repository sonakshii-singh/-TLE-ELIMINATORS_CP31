#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;  
        cin>>n;
        vector<int> a(n);
        int cnt_1=0, cnt_m1=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
             if(a[i]==1) cnt_1++;
             else cnt_m1++;
        }
        int ops=0;
        while(cnt_m1> cnt_1){
            cnt_m1--, cnt_1++, ops++;
        }
        if(cnt_m1%2==0){
            cout<<ops<<endl;
        }
        else cout<<ops+1<<endl;

    }
    return 0;
}