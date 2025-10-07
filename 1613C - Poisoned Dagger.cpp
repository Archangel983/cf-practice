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
        ll n, h;
        cin >> n >> h;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        ll low = 1, high = h, ans = h;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            ll dmg = 0;
            for (int i = 0; i < n - 1; i++)
            {
                dmg += min(mid, a[i + 1] - a[i]);
            }
            dmg += mid;
            if (dmg >= h)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << ans << "\n";
    }
}