#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    ll q=n/m;
    ll r=n%m;
    ll kmin = r*(q+1)*q/2 + (m-r)*q*(q-1)/2;
    ll kmax = (n-m+1)*(n-m)/2;
    cout<<kmin<<" "<<kmax<<"\n";
}