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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        ll minsum = b * k;
        ll maxsum = (b * k) + (n * (k - 1));
        if (s < minsum || s > maxsum)
        {
            cout << -1 << endl;
            continue;
        }
        vector<ll> v(n);
        v[0] = b * k;
        ll rem = s - b * k;
        for (ll i = 1; i < n && rem > 0; i++)
        {
            ll digit = min(rem, k - 1);
            v[i] += digit;
            rem -= digit;
        }
        if (rem > 0)
        {
            v[0] += rem;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}