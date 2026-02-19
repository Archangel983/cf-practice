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
        ll n,k;
        cin>>n>>k;
        vector<int> q(n),r(n);
        for(auto &x:q)cin>>x;
        for(auto &x:r)cin>>x;
        sort(q.begin(),q.end());
        sort(r.begin(),r.end());
        auto check=[&](int cnt){
            for(int i=0;i<cnt;i++){
                if((ll)(q[i]+1)*(r[cnt-1-i]+1)-1>k)
                return false;
            }
            return true;
        };
        int lf=0,rg=n+1;
        while(rg-lf>1){
            int mid=lf+(rg-lf)/2;
            if(check(mid)){
                lf=mid;
            }
            else
            rg=mid;
        }
        cout<<lf<<"\n";
    }
}