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
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << "\n";
            continue;
        }
        int ha = -1, hb = -1;
        {
            ll v = a;
            while (v > 0)
            {
                ++ha;
                v >>= 1;
            }
        }
        {
            ll v = b;
            while (v > 0)
            {
                ++hb;
                v >>= 1;
            }
        }
        if (hb > ha)
        {
            cout << -1 << "\n";
            continue;
        }

        ll d = (a ^ b);
        if (d <= a)
        {
            cout << 1 << "\n"
                 << d << "\n";
        }
        else
        {
            ll A = (1LL << (ha + 1)) - 1;
            ll x1 = a ^ A;
            ll x2 = A ^ b;
            cout << 2 << "\n"
                 << x1 << " " << x2 << "\n";
        }
    }
    return 0;
}
