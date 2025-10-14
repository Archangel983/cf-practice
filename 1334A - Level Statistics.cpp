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
        vector<pair<int, int>> a;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            int p, c;
            cin >> p >> c;
            a.push_back({p, c});
        }
        int prevp = 0, prevc = 0;
        for (auto [p, c] : a)
        {
            if (p < prevp || c < prevc)
            {
                ok = false;
                break;
            }
            if (c > p)
            {
                ok = false;
                break;
            }
            if ((p - prevp) < (c - prevc))
            {
                ok = false;
                break;
            }
            prevp = p;
            prevc = c;
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
}