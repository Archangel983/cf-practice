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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        vector<ll> pref(n + 1, 0);
        sort(a.begin(), a.end());
        pref[0] = a[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + a[i];
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (pref[i] > x)
                break;
            ll days = (x - pref[i]) / (i + 1) + 1;
            ans += days;
        }
        cout << ans << "\n";
    }
}