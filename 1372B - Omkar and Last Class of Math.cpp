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
        ll n;
        cin>>n;
        ll d=-1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                d=i;
                break;
            }
        }
        if(d==-1){
            cout<<1<<" "<<n-1<<"\n";
        }
                    else
            cout<<n/d<<" "<<n-(n/d)<<"\n";
    }
}