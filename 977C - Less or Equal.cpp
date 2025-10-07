#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    if (k == 0)
    {
        if (a[0] > 1)
            cout << a[0] - 1 << "\n";
        else
            cout << -1 << "\n";
    }
    else
    {
        if (k < n && a[k] == a[k - 1])
        {
            cout << -1 << "\n";
        }
        else
            cout << a[k - 1] << "\n";
    }
}