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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int bad=0;
        ll minp=INT_MAX;
        for(int i=n-1;i>=0;i--){
            if(a[i]>minp) bad++;
            minp=min(minp,a[i]);
        }
        cout<<bad<<"\n";
    }
}