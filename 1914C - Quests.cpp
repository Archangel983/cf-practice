#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n+1), b(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        ll ans = 0;
        ll prefix = 0;
        ll maxb = 0;
        for (int i = 1; i <= min(n, k); i++)
        {
            prefix += a[i];
            maxb = max(maxb, b[i]);
            ll xp = prefix + (k - i) * maxb;
            ans = max(ans, xp);
        }
        cout << ans << "\n";
    }
    return 0;
}