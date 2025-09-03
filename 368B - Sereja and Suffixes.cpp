#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<ll> a(n + 1);
    vector<int> ans(n + 1);
    vector<bool> seen(100001, false);
    int distinct = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        if (!seen[a[i]])
        {
            seen[a[i]] = true;
            distinct++;
        }
        ans[i] = distinct;
    }
    while (m--)
    {
        ll l;
        cin >> l;
        cout << ans[l] << '\n';
    }
}