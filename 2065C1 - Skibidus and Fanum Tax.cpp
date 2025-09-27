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
        int n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll b;
        cin >> b;
        if (n == 1)
        {
            cout << "YES" << "\n";
            continue;
        }
        ll prev = LLONG_MIN;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            ll temp = b - a[i];
            ll chosen = -1;
            if (temp >= prev && a[i] >= prev)
                chosen = min(temp, a[i]);
            else if (a[i] >= prev)
                chosen = a[i];
            else if (temp >= prev)
                chosen = temp;
            else
            {
                ok = false;
                break;
            }
            prev = chosen;
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
}