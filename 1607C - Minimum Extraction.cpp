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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll ans = a[0];
        for (int i = 1; i < n; i++)
        {
            ll diff = a[i] - a[i - 1];
            ans = max(ans, diff);
        }
        cout << ans << '\n';
    }
    return 0;
}