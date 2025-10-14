#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int n;
vector<pair<int, int>> drifts;
vector<int> vis;
void dfs(int v)
{
    vis[v] = 1;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i] && (drifts[i].first == drifts[v].first || drifts[i].second == drifts[v].second))
        {
            dfs(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        drifts.push_back({x, y});
        vis.push_back(0);
    }
    int need = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            need++;
            dfs(i);
        }
    }
    cout << need - 1 << "\n";
}