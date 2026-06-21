#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin>>n>>k>>s;
         vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        int odd = 0;

        for (int x : freq){
            if (x % 2==1)
                odd++;
        }
          if((odd-1)<=k) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;

    }
    return 0;
}