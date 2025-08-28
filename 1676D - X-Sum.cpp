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
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        unordered_map<int, ll> main, anti;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                main[i - j] += grid[i][j];
                anti[i + j] += grid[i][j];
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll sum = main[i - j] + anti[i + j] - grid[i][j];
                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}