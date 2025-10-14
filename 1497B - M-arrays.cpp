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
        int n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        unordered_map<ll, int> map;
        for (int i = 0; i < n; i++)
        {
            a[i] %= m;
            map[a[i]]++;
        }
        ll ans = 0;
        if (map[0] > 0)
        {
            ans++;
            map.erase(0);
        }
        for (int r = 1; r < m; r++)
        {
            if (!map.count(r))
                continue;
            int s = m - r;
            if (r == s)
            {
                ans++;
                map.erase(r);
                continue;
            }
            if (!map.count(s))
            {
                ans += map[r];
                map.erase(r);
                continue;
            }
            else
            {
                ans += max(1, abs(map[s] - map[r]));
                map.erase(r);
                map.erase(s);
            }
        }
        cout << ans << "\n";
    }
}