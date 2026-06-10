#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,m;
        cin>>n>>m;
        string x, s;
        cin>>x>>s;
        int ops=0;
        while(ops<=6){
             auto it= search(x.begin(), x.end(),s.begin(), s.end());
            if(it!=x.end()){
                cout<<ops<<endl;
                break;
            }
            else{
               x= x+x;
               ops++;
           }
        }
        if(ops>6) cout<<-1<<endl;
    }
    return 0;
}