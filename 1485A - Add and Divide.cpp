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
        ll best = INT_MAX;
        for (int add = 0; add <= 40; add++)
        {
            ll b2 = b + add;
            if (b2 == 1)
                continue;
            ll a2 = a;
            ll cnt = add;
            while (a2 > 0)
            {
                a2 /= b2;
                cnt++;
            }
            best = min(best, cnt);
        }
        cout << best << endl;
    }
    return 0;
}