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
        int n,k;
        cin>>n>>k;
        ll best = 1;
        for(ll i=1;i*i<=n;i++){
            if(n%i==0){
                if(i<=k) best=max(best,i);
                if(n/i<=k) best=max(best,n/i);
            }
        }
        cout<<n/best<<"\n";
    }
}