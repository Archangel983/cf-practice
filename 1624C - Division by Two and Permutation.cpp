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
        sort(a.rbegin(), a.rend());
        vector<bool> used(n + 1, false);
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            while (a[i] > n || (a[i] > 0 && used[a[i]]))
            {
                a[i] /= 2;
            }
            if (a[i] == 0)
            {
                ok = false;
                break;
            }
            used[a[i]] = true;
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
}