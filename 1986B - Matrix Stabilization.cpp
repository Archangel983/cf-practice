#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int up, down, left, right;
                if (i > 0)
                    up = v[i - 1][j];
                else
                    up = 0;
                if (j > 0)
                    left = v[i][j - 1];
                else
                    left = 0;
                if (i < n - 1)
                    down = v[i + 1][j];
                else
                    down = 0;
                if (j < m - 1)
                    right = v[i][j + 1];
                else
                    right = 0;
                int max_neighbour = max(max(up, down), max(left, right));
                if (v[i][j] > max_neighbour)
                {
                    v[i][j] = max_neighbour;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
}
