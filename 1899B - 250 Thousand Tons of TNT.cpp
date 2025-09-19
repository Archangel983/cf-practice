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
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        vector<ll> pref(n + 1, 0);
        for (int i = 1; i <= n; i++)
            pref[i] = pref[i - 1] + a[i];
        ll ans = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                int d1 = i, d2 = n / i;
                if (d1 < n)
                {
                    ll mn = LLONG_MAX, mx = LLONG_MIN;
                    for (int j = d1; j <= n; j += d1)
                    {
                        ll sum = pref[j] - pref[j - d1];
                        mn = min(mn, sum);
                        mx = max(mx, sum);
                    }
                    ans = max(ans, mx - mn);
                }
                if (d2 < n && d2 != d1)
                {
                    ll mn = LLONG_MAX, mx = LLONG_MIN;
                    for (int j = d2; j <= n; j += d2)
                    {
                        ll sum = pref[j] - pref[j - d2];
                        mn = min(mn, sum);
                        mx = max(mx, sum);
                    }
                    ans = max(ans, mx - mn);
                }
            }
        }
        cout << ans << "\n";
    }
}
