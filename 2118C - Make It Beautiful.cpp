#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        ll ans=0;
        for (ll x : a)
            ans += __builtin_popcountll(x);
        for(int j=0;j<=60;j++){
            ll bb=(1LL<<j);
            for(ll x:a){
                if(!(x&bb)&& k>=bb){
                    ans++;
                    k-=bb;
                }
            }
        }
        cout<<ans<<"\n";
    }
}