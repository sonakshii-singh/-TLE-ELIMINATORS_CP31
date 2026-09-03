#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int zeros=0,ones=0;
        for(int i=0; i<s.size(); i++){
             if(s[i]=='0') zeros++;
             else ones++;
        }
        int len_t=0;
        for(int i=0; i<s.size(); i++){
             if(s[i]=='1' && zeros>0){
                zeros--;
                len_t++;
             }
             else if(s[i]=='0' && ones>0){
                ones--;
                len_t++;
             }
             else break;
        }
        cout<<s.size()-len_t<<endl;
    }
}