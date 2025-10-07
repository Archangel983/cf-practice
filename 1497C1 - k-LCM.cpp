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
        if(n%4==0){
            cout<<n/2<<" "<<n/4<<" "<<n/4<<"\n";
        }
        else if(n%4==2){
            cout<<(n-2)/2<<" "<<(n-2)/2<<" "<<2<<"\n";
        }
        else{
            cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<"\n";
        }
    }
}