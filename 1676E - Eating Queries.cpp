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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        vector<ll> prefix(n);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        while (q--)
        {
            ll x;
            cin >> x;
            if (x > prefix.back())
            {
                cout << -1 << "\n";
                continue;
            }
            int k = lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin();
            cout << k + 1 << "\n";
        }
    }
}