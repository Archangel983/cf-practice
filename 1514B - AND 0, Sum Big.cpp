#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1'000'000'007;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll ans = 1;
        for (int i = 0; i < k; i++) {
            ans = (ans * n) % MOD;
        }
        cout << ans << "\n";
    }
}
