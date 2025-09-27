#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    bool ok=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            s.erase(i,1);
            ok=false;
            break;
        }
    }
    if(ok){
        s.erase(0,1);
    }
    cout<<s<<"\n";
}