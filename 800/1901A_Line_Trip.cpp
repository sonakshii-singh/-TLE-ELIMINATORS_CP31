#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
       int n, x;
       cin>>n>>x;
       int maxi=INT_MIN;
       vector<int> fuel(n);
       for(int i=0; i<n; i++){
        cin>>fuel[i];
       }
       for(int i=0; i<n-1; i++){
        int diff=fuel[i+1]-fuel[i];
        maxi = max(maxi,diff);
       }
       int diff1=2*(x-fuel[n-1]);
       int diff2= fuel[0];
       maxi=max({maxi, diff1, diff2});
       cout<<maxi<<endl;
    }
}    
