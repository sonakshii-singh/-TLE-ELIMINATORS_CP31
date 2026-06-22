#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin>>n>>k>>x;
        long long maxSum=0;
        long long minSum= k*(k+1)/2;
        for(int i=n; i>n-k; i--){
             maxSum+= i;
        }
        if(x>=minSum && x<=maxSum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}