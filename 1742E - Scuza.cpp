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
        for (auto &x : a)
            cin >> x;
        vector<ll> pref(n + 1, 0), maxh(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + a[i];
            maxh[i + 1] = max(maxh[i], a[i]);
        }
        while (q--)
        {
            ll k;
            cin >> k;
            int idx = upper_bound(maxh.begin(), maxh.end(), k) - maxh.begin() - 1;
            if (idx >= 0)
                cout << pref[idx] << " ";
            else
                cout << 0 << " ";
        }
        cout << "\n";
    }
}