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
        int n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        ll ans = 0;
        ll sum = 0;
        ll size = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            size++;
            if (sum >= x * size)
            {
                ans = max(ans, size);
            }
        }
        cout << ans << "\n";
    }
}