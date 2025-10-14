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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0)
        {
            cout << 1 << "\n";
            continue;
        }
        ll ans = a;
        ans += (2 * min(b, c));
        ans += min(a + 1, abs(b - c) + d);
        cout << ans << "\n";
    }
}