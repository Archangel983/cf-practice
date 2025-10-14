#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll x,y,z,k;
        cin>>x>>y>>z>>k;
        ll ans=0;
        for(int a=1;a<=x;a++){
            for(int b=1;b<=y;b++){
                if(k%(a*b)!=0) continue;
                ll c=k/(a*b);
                if(c>z)continue;
                ll ways=(x-a+1)*(y-b+1)*(z-c+1);
                ans=max(ans,ways);
            }
        }
        cout<<ans<<"\n";
    }
}