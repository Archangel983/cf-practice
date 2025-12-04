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
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        vector<ll> pref(n);
        ll mx = LLONG_MIN;
        for (int i = 0; i < n; ++i)
        {
            mx = max(mx, a[i]);
            pref[i] = mx;
        }
        vector<ll> b(n);
        for (int i = 0; i < n; ++i)
        {
            bool isPeak = ((i + 1) % 2 == 0);
            b[i] = isPeak ? pref[i] : a[i];
        }
        ll ans = 0;
        for (int i = 0; i < n; i += 2)
        {
            ll mn = LLONG_MAX;
            if (i - 1 >= 0)
                mn = min(mn, b[i - 1]);
            if (i + 1 < n)
                mn = min(mn, b[i + 1]);
            if (mn == LLONG_MAX)
                continue;
            ll target = mn - 1;
            if (b[i] > target)
                ans += (b[i] - target);
        }
        cout << ans << "\n";
    }
    return 0;
}
