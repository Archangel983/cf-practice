#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<ll> prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+a[i];
        }
        ll ans=0;
        for(int i=0;i<=k;i++){
            int left=2*i;
            int right=n-(k-i);
            if(left<=right){
                ll sum=prefix[right]-prefix[left];
                ans=max(ans,sum);
            }
        }
        cout<<ans<<"\n";
    }
}