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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m), b(k);
        for (int i = 0; i < m; i++)
            cin >> a[i];
        for (int i = 0; i < k; i++)
            cin >> b[i];
        vector<bool> knows(n + 1, false);
        for (int x : b)
            knows[x] = true;
        int cnt = k;
        string res(m, '0');
        if (cnt == n)
        {
            res = string(m, '1');
        }
        else if (cnt == n - 1)
        {
            for (int i = 0; i < m; i++)
            {
                if (!knows[a[i]])
                {
                    res[i] = '1';
                }
            }
        }
        cout << res << '\n';
    }
    return 0;
}