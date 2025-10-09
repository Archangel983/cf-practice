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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        sort(a.begin(), a.end());
        ll ans = 0, prevval = LLONG_MIN, prevcnt = 0;
        for (int i = 0; i < n;)
        {
            ll v = a[i];
            ll cnt = 0;
            while (i < n && a[i] == v)
            {
                cnt++;
                i++;
            }
            if (prevval != v - 1)
            {
                prevcnt = 0;
            }
            if (cnt > prevcnt)
            {
                ans += (cnt - prevcnt);
            }
            prevval = v;
            prevcnt = cnt;
        }
        cout << ans << "\n";
    }
}