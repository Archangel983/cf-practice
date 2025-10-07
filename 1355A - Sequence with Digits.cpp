#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        for(ll i=1;i<k;i++){
            ll x=n,mn=LLONG_MAX,mx=LLONG_MIN;
            while(x>0){
                ll d=x%10;
                mn=min(mn,d);
                mx=max(mx,d);
                x/=10;
            }
            if(mn==0) break;
            n+=(mn*mx);
        }
        cout<<n<<"\n";
    }
}