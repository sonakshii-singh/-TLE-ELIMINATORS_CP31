#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if(d<b){
            cout<<-1<<endl;
            continue;
        } 
            int V_moves= d-b;
            a=a+V_moves;
            b=b+V_moves;
            if(c>a){
                cout<<-1<<endl;
                continue;
            }
            int H_moves= a-c;
            cout<<V_moves+ H_moves<<endl;

        
    }
}