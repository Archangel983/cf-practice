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
        int g=0,count=0;
        for(int i=0;i<n;i++){
            count++;
            if(count>=a[i]){
                g++;
                count=0;
            }
        }
        cout<<g<<"\n";
    }
}