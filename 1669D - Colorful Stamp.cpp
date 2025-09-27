#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool ok=true;
        int i=0;
        while(i<n){
            if(s[i]=='W'){
                i++;continue;
            }
            bool r=false,b=false;
            while(i<n && s[i]!='W'){
                if(s[i]=='R')r=true;
                if(s[i]=='B')b=true;
                i++;
            }
            if(!r || !b){
                ok=false;break;
            }
        }
        cout<<(ok?"YES":"NO")<<"\n";
    }
}