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
        ll n, m, k;
        cin >> n >> m >> k;
        ll l = 0, r = m, ans;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if ((((m / (mid + 1)) * mid) + (m % (mid + 1))) * n >= k)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }
}