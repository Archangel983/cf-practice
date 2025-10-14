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
        ll prod = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            ll x = a[i];
            int cnt = 0;
            while (x % 2 == 0)
            {
                cnt++;
                x /= 2;
            }
            prod += cnt;
        }
        if (prod >= n)
        {
            cout << 0 << "\n";
            continue;
        }
        vector<int> g;
        for (int i = 1; i <= n; i++)
        {
            int x = i;
            int cnt = 0;
            while (x % 2 == 0)
            {
                cnt++;
                x /= 2;
            }
            if (cnt > 0)
                g.push_back(cnt);
        }
        sort(g.rbegin(), g.rend());
        int i = 0, ans = 0;
        while (prod < n && i < g.size())
        {
            prod += g[i];
            ans++;
            i++;
        }
        if (prod >= n)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
    }
}