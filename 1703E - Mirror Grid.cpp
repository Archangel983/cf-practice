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
        cin >> n;
        vector<string> g(n);
        for (int i = 0; i < n; ++i) cin >> g[i];
        int ans = 0;
        for (int i = 0; i < n/2; ++i) {
            for (int j = 0; j < n/2 + n%2; ++j) {
                int x1 = i, y1 = j;
                int x2 = j, y2 = n-1-i;
                int x3 = n-1-i, y3 = n-1-j;
                int x4 = n-1-j, y4 = i;
                int ones = (g[x1][y1]=='1') + (g[x2][y2]=='1')
                          + (g[x3][y3]=='1') + (g[x4][y4]=='1');
                ans += min(ones, 4 - ones);
            }
        }
        cout << ans << "\n";
    }
}
