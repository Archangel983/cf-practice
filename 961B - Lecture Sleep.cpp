#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> t(n);
    for (auto &x : t)
        cin >> x;
    ll extra = 0, awake = 0, bextra;
    for (int i = 0; i < n; i++)
    {
        if (t[i] == 1)
        {
            awake += a[i];
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (t[i] == 0)
            extra += a[i];
    }
    bextra = extra;
    for (int i = k; i < n; i++)
    {
        if (t[i] == 0)
            extra += a[i];
        if (t[i - k] == 0)
            extra -= a[i - k];
        bextra = max(extra, bextra);
    }
    cout << awake + bextra << "\n";
}