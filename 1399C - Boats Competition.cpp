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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int> cnt(n+1,0);
        for(int x:a) cnt[x]++;
        int best=0;
        for(int s=2;s<=2*n;s++){
            int pairs=0;
            for(int x=1;x<=n;x++){
                int y=s-x;
                if(y<x) break;
                if(y>n || y<1) continue;
                if(x==y) pairs+=cnt[x]/2;
                else
                pairs+=min(cnt[x],cnt[y]);
            }
            best=max(best,pairs);
        }
        cout<<best<<"\n";
    }
}