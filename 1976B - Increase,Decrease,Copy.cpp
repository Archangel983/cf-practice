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
        vector<ll> a(n), b(n + 1);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n + 1; i++)
            cin >> b[i];
        ll base = 0;
        ll extra = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            base += abs(a[i] - b[i]);
            extra = min(extra, abs(a[i] - b[n]));
            extra = min(extra, abs(b[i] - b[n]));
            if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i]))
                extra = 0;
        }
        cout << base + extra + 1 << "\n";
    }
}