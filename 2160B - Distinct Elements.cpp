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
        int n;
        cin >> n;
        vector<ll> b(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            cin >> b[i];
        vector<ll> f(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            f[i] = b[i] - b[i - 1];
        vector<int> res(n + 1, 0);
        int next = 1;
        for (int i = 1; i <= n; ++i)
        {
            ll last = i - f[i];
            if (last == 0)
            {
                res[i] = next++;
            }
            else
            {
                res[i] = res[last];
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            cout << res[i] << (i == n ? "\n" : " ");
        }
    }
    return 0;
}
