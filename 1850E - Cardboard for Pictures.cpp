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
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 1, r = 1e9;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll sum = 0;
            for (ll i = 0; i < n; i++)
            {
                sum += (a[i] + 2 * mid) * (a[i] + 2 * mid);
                if (sum > c)
                    break;
            }
            if (sum == c)
            {
                cout << mid << "\n";
                break;
            }
            else if (sum > c)
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
    }
}