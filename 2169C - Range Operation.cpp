#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll> a(n+1),pref(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pref[i]=pref[i-1]+a[i];
        }
        ll total=pref[n];
        ll best=LLONG_MAX;
        ll gain=0;
        for(int i=1;i<=n;i++){
            ll b = 1LL*i*i-1LL*i-pref[i-1];
            best=min(best,b);
            ll a=1LL*i*i+1LL*i-pref[i];
            gain=max(gain,a-best);
        }
        cout<<total+gain<<"\n";
    }
}