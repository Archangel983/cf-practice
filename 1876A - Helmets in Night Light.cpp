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
        int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] > p)
                b[i] = p;
        }
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({b[i], a[i]});
        }
        sort(v.begin(), v.end());
        ll ans = p;
        int covered = 1;
        for (int i = 0; i < n && covered < n; i++)
        {
            int cost = v[i].first;
            int cap = v[i].second;
            int use = min(cap, n - covered);
            ans += 1LL * use * cost;
            covered += use;
        }
        cout << ans << endl;
    }
    return 0;
}