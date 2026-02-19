#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> dist(n + 1, -1);
    queue<int> q;
    dist[1] = 0;
    q.push(1);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int i = 0; i < adj[node].size(); i++)
        {
            int side = adj[node][i];
            if (dist[side] == -1)
            {
                dist[side] = dist[node] + 1;
                q.push(side);
            }
        }
    }
    vector<int> ans(k + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int type = p[i];
        ans[type] = max(ans[type], dist[i]);
    }
    for (int i = 1; i <= k; i++)
    {
        cout << ans[i] << " ";
    }
}