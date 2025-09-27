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
        ll blocks=k/(n-1);
        ll rem=k%(n-1);
        if(rem!=0){
            cout<<blocks*n+rem<<"\n";
        }
        else
        cout<<blocks*n-1<<"\n";
    }
}