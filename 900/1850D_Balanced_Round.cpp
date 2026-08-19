#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        int cnt=1, maxi=1;
        for(int i=0; i<n-1; i++){
           if(abs(a[i]-a[i+1])<=k){
             cnt++;
             maxi=max(maxi,cnt);
           } 
           else cnt=1;
        }
        cout<<n-maxi<<endl;
    }
}