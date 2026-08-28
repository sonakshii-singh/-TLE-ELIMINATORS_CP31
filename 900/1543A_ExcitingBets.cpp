#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        long long a, b;
        cin>>a>>b;
        if(b>a) swap(a,b);
        if(a==b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        else{
            long long gcd=a-b;
            long long moves= min(b%gcd,gcd-(b%gcd));
            cout<<gcd<<" "<<moves<<endl;
        }
    }
}
