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
        for(auto &x:a)cin>>x;
        sort(a.begin(),a.end());
        vector<ll> b;
        for(int i=0;i<n-1;i+=2){
            b.push_back(a[i+1]-a[i]);
        }
        sort(b.rbegin(),b.rend());
        cout<<b[0]<<"\n";
    }
}