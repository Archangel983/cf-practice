#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int N = 2e5 + 10;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<vector<int>> fac(N + 1);
    for (int i = 2; i <= N; i++)
    {
        if (!fac[i].empty())
            continue;
        for (int j = i; j <= N; j += i)
        {
            fac[j].push_back(i);
        }
    }
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &y : b)
            cin >> y;
        int ans = 2;
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            for (int x : fac[a[i]])
            {
                if (cnt[x] > 0)
                    ans = 0;
                cnt[x]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int x : fac[a[i]])
                cnt[x]--;
            for (int x : fac[a[i] + 1])
            {
                if (cnt[x] > 0)
                {
                    ans = min(ans, 1);
                }
            }
            for (int x : fac[a[i]])
                cnt[x]++;
        }
        cout << ans << "\n";
    }
}