#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> costs;
    for (ll h = 1;; h++) {
        ll c = (3 * h * h + h) / 2;
        if (c > 1e9) break;
        costs.push_back(c);
    }
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int ans = 0;
        while (n >= 2) {
            int pos = upper_bound(costs.begin(), costs.end(), n) - costs.begin();
            if (pos == 0) break;
            n -= costs[pos - 1];
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
