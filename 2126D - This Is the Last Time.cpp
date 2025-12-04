/*#include <bits/stdc++.h>
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
        int n, k;
        cin >> n >> k;
        pair<int, pair<int, int>> p[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i].first >> p[i].second.first >> p[i].second.second;
        }
        sort(p + 1, p + n + 1);
        int cur = k;
        for (int i = 1; i <= n; i++)
        {
            if (cur < p[i].first)
                break;
            cur = max(cur, p[i].second.second);
        }
        cout << cur << "\n";
    }
}*/
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
        int n, k;
        cin >> n >> k;
        vector<array<ll, 3>> a(n);
        for (auto &x : a)
            cin >> x[0] >> x[1] >> x[2];
        sort(a.begin(), a.end());
        priority_queue<pair<ll, ll>> pq;
        int cur = k, i = 0;
        while (true)
        {
            while (i < n && a[i][0] <= cur)
                pq.push({a[i][2], a[i][1]}), i++;
            while (!pq.empty() && pq.top().second < cur)
                pq.pop();
            if (pq.empty() || pq.top().first <= cur)
                break;
            cur = pq.top().first;
        }
        cout << cur << "\n";
    }
}