#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(auto &x:a)cin>>x;
        for(auto &x:b)cin>>x;
        sort(a.begin(), a.end());
        for (int i = 0; i < m; i++) {
            int cnt = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            cout << cnt << " ";


    }
}