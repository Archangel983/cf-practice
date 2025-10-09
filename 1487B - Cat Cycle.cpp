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
        if(n%2==0){
            cout<<(k-1)%n+1<<"\n";
        }
        else{
            ll pos = ((k - 1) + (k - 1) / (n / 2)) % n + 1;
            cout<<pos<<"\n";
        }
    }
}