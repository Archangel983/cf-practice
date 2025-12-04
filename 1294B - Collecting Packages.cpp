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
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            a.push_back({x, y});
        }
        sort(a.begin(), a.end());
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first < a[i - 1].first || a[i].second < a[i - 1].second)
            {
                ok = false;
                break;
            }
        }
        if (!ok)
        {
            cout << "NO\n";
            continue;
        }
        int x = 0, y = 0;
        string res;
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            while (a[i].first > x)
            {
                res.push_back('R');
                x++;
            }
            while (a[i].second > y)
            {
                res.push_back('U');
                y++;
            }
        }
        cout << res << "\n";
    }
}