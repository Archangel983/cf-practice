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
        ll x;
        cin >> x;
        bool ok = false;
        for (ll a = 1; a * a * a < x; a++)
        {
            ll rem = x - a * a * a;
            ll b = cbrt(rem);
            if (b > 0 && (b * b * b == rem || (b + 1) * (b + 1) * (b + 1) == rem || (b - 1) * (b - 1) * (b - 1) == rem))
            {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}