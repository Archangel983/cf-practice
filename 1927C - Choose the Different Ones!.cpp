#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        vector<bool> fa(k + 1, false), fb(k + 1, false);
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= k)
                fa[a[i]] = true;
        }
        for (int i = 0; i < m; i++)
        {
            if (b[i] <= k)
                fb[b[i]] = true;
        }
        int ca = 0, cb = 0, cu = 0;
        for (int i = 1; i <= k; i++)
        {
            if (fa[i])
            {
                ca++;
            }
            if (fb[i])
                cb++;
            if (fb[i] || fa[i])
                cu++;
        }
        int need = k / 2;
        if (ca >= need && cb >= need && cu == k)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}