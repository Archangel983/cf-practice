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
        ll x, y, z;
        cin >> x >> y >> z;
        bool ok = true;
        for (int i = 0; i < 32; ++i)
        {
            int xi = (x >> i) & 1;
            int yi = (y >> i) & 1;
            int zi = (z >> i) & 1;
            int cnt = xi + yi + zi;
            if (cnt == 2)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
