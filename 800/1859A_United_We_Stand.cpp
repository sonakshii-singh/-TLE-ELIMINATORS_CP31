#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n; 
        cin>>n;
        int mini = INT_MAX;
        vector<int> a(n),b,c ;
        for(int i=0; i<n; i++){
            cin>>a[i];
            mini= min(a[i],mini);
        }
        for(auto x: a){
            if(x==mini){
                b.push_back(x);
            }
            else c.push_back(x);
        }
          if(c.size()==0) cout<<-1<<endl;
          else{
            cout<<b.size()<<" "<<c.size()<<endl;;
            for(auto x:b){
                cout<<x<<" ";
            }
            cout<<endl;
            for(auto x:c){
                cout<<x<<" ";
            }
            cout<<endl;
          }
       }
}