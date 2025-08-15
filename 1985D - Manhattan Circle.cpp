#include <bits/stdc++.h>
using namespace std;
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
        vector<string> grid(n);
        for (int i = 0; i < n; i++)
        {
            cin >> grid[i];
        }
        int minrow = n, maxrow = 1;
        int mincol = m, maxcol = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '#')
                {
                    minrow = min(minrow, i + 1);
                    maxrow = max(maxrow, i + 1);
                    mincol = min(mincol, j + 1);
                    maxcol = max(maxcol, j + 1);
                }
            }
        }
        int centerrow = (minrow + maxrow) / 2;
        int centercol = (maxcol + mincol) / 2;
        cout << centerrow << " " << centercol << endl;
    }
}