#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll> a(n);
        ll sum=0;
        for(auto &x:a){ cin>>x;sum+=x;}
        if(sum%n!=0){
            cout<<"NO"<<"\n";
            continue;
        }
        ll sumodd=0,cntodd=0;
        for(int i=1;i<n;i+=2){
            cntodd++;
            sumodd+=a[i];
        }
        if(sumodd==cntodd*(sum/n)){
            cout<<"YES"<<"\n";
        }
        else
        cout<<"NO"<<"\n";
    }
}