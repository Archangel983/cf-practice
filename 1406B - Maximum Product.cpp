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
            cin >> x;
        sort(a.begin(), a.end());
        ll ans = LLONG_MIN;
        ans = max(ans, a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3]);
        ans = max(ans, a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5]);
        ans = max(ans, a[0] * a[1] * a[2] * a[3] * a[4]);
        ans = max(ans, a[0] * a[1] * a[2] * a[3] * a[n - 1]);
        cout << ans << "\n";
    }
}