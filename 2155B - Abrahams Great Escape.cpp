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
        ll m = n * n - k;
        if (m == 1)
        {
            cout << "NO\n";
            continue;
        }
        vector<string> g(n, string(n, 'U'));
        if (m >= 2)
        {
            g[n - 1][0] = 'R';
            g[n - 1][1] = 'L';
            m -= 2;
            for (int j = 2; j < n && m > 0; j++, m--)
            {
                g[n - 1][j] = 'L';
            }
            for (int i = n - 2; i >= 0 && m > 0; i--)
            {
                for (int j = 0; j < n && m > 0; j++)
                {
                    if (j == 0 || j == n - 1)
                    {
                        g[i][j] = 'D';
                    }
                    else
                    {
                        g[i][j] = 'L';
                    }
                    m--;
                }
            }
        }
        cout << "YES\n";
        for (auto &row : g)
            cout << row << "\n";
    }
}