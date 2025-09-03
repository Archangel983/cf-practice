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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        ll height = 0;
        for (auto &x : a)
            cin >> x;
        ll l = 1, r = *max_element(a.begin(), a.end()) + x;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll sum = 0;
            for (auto &p : a)
            {
                if (mid > p)
                    sum += mid - p;
            }
            if (sum <= x)
            {
                height = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << height << '\n';
    }
    return 0;
}