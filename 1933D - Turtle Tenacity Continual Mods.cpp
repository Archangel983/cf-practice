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
        if (a.front() == a.back())
        {
            cout << "NO\n";
            continue;
        }
        int cntmin = count(a.begin(), a.end(), a[0]);
        if (cntmin >= 2)
        {
            bool ok = true;
            for (ll x : a)
            {
                if (x % a[0] != 0)
                {
                    ok = false;
                    break;
                }
            }
            cout << (ok ? "NO\n" : "YES\n");
        }
        else
            cout << "YES\n";
    }
}