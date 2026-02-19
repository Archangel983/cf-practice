#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (auto &x : s)
        cin >> x;
    vector<vector<ll>> cnt(n, vector<ll>(26, 0));
    vector<ll> total(26, 0);
    for (int i = 0; i < n; i++)
    {
        for (char c : s[i])
        {
            cnt[i][c - 'A']++;
            total[c - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        total[i] *= m;
    }
    for (int i = 0; i < n; i++)
    {
        ll ans = LLONG_MAX;
        bool ok = true;
        for (int j = 0; j < 26; j++)
        {
            ll there = total[j] - m * cnt[i][j];
            if (there < cnt[i][j])
            {
                ok = false;
                break;
            }
            ll need = total[j] / m - cnt[i][j];
            if (need > 0)
            {
                ans = min(ans, (there - cnt[i][j]) / need);
            }
        }
        if (!ok)
            cout << -1 << " ";
        else
            cout << ans << " ";
    }
    cout << "\n";
}