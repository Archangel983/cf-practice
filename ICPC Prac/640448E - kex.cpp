#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define int long long
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), b(q);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> kex(n);
    for (int i = 0; i < n; i++)
    {
        kex[i] = a[i] - i;
    }
    for (int i = 0; i < q; i++)
        cin >> b[i];

    for (int i = 0; i < q; i++)
    {
        int query = b[i];

        int idx = lower_bound(kex.begin(), kex.end(), query) - kex.begin() - 1;

        cout << query + idx << " ";
    }
    cout << endl;
}