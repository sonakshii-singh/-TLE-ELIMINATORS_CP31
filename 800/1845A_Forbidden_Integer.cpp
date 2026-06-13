#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin>>n>>k>>x;
        if(x==1){
            if(n%2==0 && k>1){
             int twos = n/2;
             cout<<"YES"<<endl;
             cout<<twos<<endl; 
             for(int i=0; i<twos; i++){
                cout<<2<<" ";
             }
             cout<<endl;
            }
            else if(n%2==1 && k>2){
                int twos= n/2 -1;
                cout<<"YES"<<endl;
                cout<< twos+1<<endl;
                for(int i=0; i<twos; i++){
                cout<<2<<" ";
             }
             cout<<3;
             cout<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0; i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;

        }

    }
    return 0;
}