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
        int lead=0,end=0;
        while(lead<n &&s[lead]=='0')
        lead++;
        while(end<n && s[n-end-1]=='1')
        end++;
        if(lead+end<n){
            cout<<string(lead+1,'0')+string(end,'1')<<"\n";
        }
        else
        cout<<s<<"\n";
    }
}