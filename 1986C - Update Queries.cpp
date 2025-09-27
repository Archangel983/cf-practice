#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int> ind(m);
        for(int i=0;i<m;i++){
            cin>>ind[i];
            ind[i]--;
        }
        string c;
        cin>>c;
        sort(ind.begin(),ind.end());
        ind.erase(unique(ind.begin(),ind.end()),ind.end());
        sort(c.begin(),c.end());
        for(int i=0;i<ind.size();i++){
            s[ind[i]]=c[i];
        }
        cout<<s<<"\n";
    }
}