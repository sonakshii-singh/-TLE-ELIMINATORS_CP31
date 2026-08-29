#include <bits/stdc++.h>
using namespace std;
int dx[4]={-1,1,-1,1},dy[4]={-1, -1,1,1};
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin>>a>>b;
        long long  kingx, kingy, queenx, queeny;
        cin>>kingx>>kingy>>queenx>>queeny;
        set<pair<long long, long long>> king, queen;
        for(int i=0; i<4; i++){
            king.insert({kingx+dx[i]*a,kingy+dy[i]*b});
            king.insert({kingx+dx[i]*b,kingy+dy[i]*a});

            queen.insert({queenx+dx[i]*a,queeny+dy[i]*b});
            queen.insert({queenx+dx[i]*b,queeny+dy[i]*a});
        }
        int ans=0;
        for(auto pos:king){
            if(queen.find(pos)!=queen.end()){
               ans++;
            }
        }
        cout<<ans<<endl;
    }
}