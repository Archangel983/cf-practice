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
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        if (n <= 2)
        {
            cout << -1 << '\n';
            continue;
        }
        sort(a.begin(), a.end());
        ll need = n / 2;
        ll unhappy = a[need];
        ll x = 2 * n * unhappy - total + 1;
        if (x < 0)
            x = 0;
        cout << x << "\n";
    }
}