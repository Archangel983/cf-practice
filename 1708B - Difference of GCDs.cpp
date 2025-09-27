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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n+1);
        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            ll ind = ((l + i - 1) / i) * i;
            if (ind > r)
            {
                ok = false;
                break;
            }
            else
                a[i] = ind;
        }
        if (!ok)
            cout << "NO" << "\n";
        else
        {
            cout << "YES" << "\n";
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
}