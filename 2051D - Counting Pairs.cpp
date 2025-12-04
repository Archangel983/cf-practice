#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> a(n);
        for(auto &x:a)cin>>x;
        sort(a.begin(),a.end());
        ll total = accumulate(a.begin(), a.end(), 0LL);
        ll l = total - y;
        ll r = total - x;
        ll ans=0;
        for(int i=0;i<n;i++){
            ll low=l-a[i];
            ll high=r-a[i];
            auto lo=lower_bound(a.begin()+i+1,a.end(),low);
            auto hi=upper_bound(a.begin()+i+1,a.end(),high);
            ans+=(hi-lo);
        }
        cout<<ans<<"\n";
    }
}