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
        vector<vector<int>> a(n, vector<int>(m));
        vector<int> row(n, 0), col(m, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        int f = 0, g = 0;
        for (int i = 0; i < n; i++)
            if (row[i] != 1)
                f++;
        for (int i = 0; i < m; i++)
            if (col[i] != 1)
                g++;
        int moves = min(f, g);
        cout << (moves % 2 == 1 ? "Ashish\n" : "Vivek\n");
    }
}