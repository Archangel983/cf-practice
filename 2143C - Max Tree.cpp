#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
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
        vector<int> indeg(n, 0);
        vector<vector<int>> adj(n);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v, x, y;
            cin >> u >> v >> x >> y;
            u--, v--;
            if (x <= y)
            {
                adj[u].push_back(v);
                indeg[v]++;
            }
            else
            {
                adj[v].push_back(u);
                indeg[u]++;
            }
        }
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (indeg[i] == 0)
            {
                q.push(i);
            }
        }
        vector<int> p(n);
        int curr = 1;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            p[u] = curr++;
            for (int v : adj[u])
            {
                indeg[v]--;
                if (indeg[v] == 0)
                    q.push(v);
            }
        }
        for (auto it : p)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}