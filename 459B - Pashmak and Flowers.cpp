#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a)cin>>x;
    ll mn=*min_element(a.begin(),a.end());
    ll mx=*max_element(a.begin(),a.end());
    ll diff = mx-mn;
    if(mx==mn){
        cout<<0<<" "<<1LL*n*(n-1)/2<<"\n";
        return 0;
    }
    ll cntmn=0, cntmx=0;
    for(ll x:a){
        if(x==mn) cntmn++;
        if(x==mx) cntmx++;
    }
    cout<<diff<<" "<<cntmn*cntmx<<"\n";
}