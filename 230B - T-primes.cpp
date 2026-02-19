#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e6;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<bool> prime(mod+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=mod;i++){
        if(prime[i]){
            for(int j=i*i;j<=mod;j+=i)
                prime[j]=false;
        }
    }
    while (t--) {
        ll n;
        cin>>n;
        ll x=sqrtl(n);
        if(x*x==n && prime[x]){
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
}