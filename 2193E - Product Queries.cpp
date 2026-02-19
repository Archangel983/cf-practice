#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &x:a)cin>>x;
        vector<int> cnt(n+1,0);
        for(int x:a)cnt[x]++;
        vector<int> dp(n+1,mod);
        for(int i=1;i<=n;i++){
            if(cnt[i]>0)dp[i]=1;
        }
        for(int i=1;i<=n;i++){
            if(dp[i]==mod) continue;
            for(int v=1;v*i<=n;v++){
                if(cnt[v]>0){
                    dp[i*v]=min(dp[i*v],dp[i]+1);
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(dp[i]==mod) cout<<-1<<" ";
            else cout<<dp[i]<<" ";
        }
        cout<<"\n";
    }
}