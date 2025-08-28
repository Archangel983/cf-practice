#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<vector<char>> v(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        if (m == 1)
        {
            int cnt = 0;
            for (int i = 0; i < n; i++)
                if (v[i][0] == '.')
                    cnt++;
            cout << 1LL * cnt * x << endl;
            continue;
        }
        ll cost = 0;
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            while (j < m)
            {
                if (v[i][j] == '.')
                {
                    if (j + 1 < m && v[i][j + 1] == '.')
                    {
                        cost += min(2 * x, y);
                        j+=2;
                    }
                    else
                    {
                        cost += x;
                        j++;
                    }
                }
                else
                    j++;
            }
        }
        cout << cost << endl;
    }
}