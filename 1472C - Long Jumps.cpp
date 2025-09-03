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
        int n;
        cin >> n;
        vector<ll> a(n + 1), dp(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (int i = n; i >= 1; i--)
        {
            if (i + a[i] <= n)
            {
                dp[i] = a[i] + dp[i + a[i]];
            }
            else
                dp[i] = a[i];
            ans = max(ans, dp[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}