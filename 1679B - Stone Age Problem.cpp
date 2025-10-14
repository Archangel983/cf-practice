#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
    }
    vector<int> lastupdate(n + 1, 0);
    ll last = 0;
    int settime = 0;
    for (int t = 1; t <= q; t++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            ll i, x;
            cin >> i >> x;
            ll cur;
            if (lastupdate[i] < settime)
            {
                cur = last;
            }
            else
            {
                cur = a[i];
            }
            sum += (x - cur);
            a[i] = x;
            lastupdate[i] = t;
        }
        else
        {
            ll x;
            cin >> x;
            last = x;
            settime = t;
            sum = 1LL * n * x;
        }
        cout << sum << "\n";
    }
}