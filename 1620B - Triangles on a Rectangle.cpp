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
        ll w, h;
        cin >> w >> h;
        ll ans = 0;
        for (int i = 0; i < 4; i++)
        {
            int k;
            cin >> k;
            vector<ll> v(k);
            for (auto &x : v)
                cin >> x;
            ll diff = v.back() - v.front();
            if (i < 2)
                ans = max(ans, diff * h);
            else
                ans = max(ans, diff * w);
        }
        cout << ans << endl;
    }
    return 0;
}