#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, l, r, k;
        cin >> n >> l >> r >> k;
        if (n % 2 != 0)
        {
            cout << l << '\n';
            continue;
        }
        if (n == 2)
        {
            cout << -1 << '\n';
            continue;
        }
        ll res = 1;
        bool fl = 0;
        while (res <= r)
        {
            if (res > l)
            {
                fl = 1;
                if (k <= n - 2)
                {
                    cout << l << '\n';
                }
                else
                    cout << res << '\n';
                break;
            }
            res *= 2;
        }
        if (!fl)
            cout << -1 << '\n';
    }
}