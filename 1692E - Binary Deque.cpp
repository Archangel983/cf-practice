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
        int n, s;
        cin >> n >> s;
        vector<ll> a(n);
        int ones = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                ones++;
        }
        if (ones < s)
        {
            cout << -1 << "\n";
            continue;
        }
        if (ones == s)
        {
            cout << 0 << "\n";
            continue;
        }
        int best = 0, cur = 0, l = 0;
        for (int r = 0; r < n; r++)
        {
            cur += a[r];
            while (cur > s)
                cur -= a[l++];
            if (cur == s)
                best = max(best, r - l + 1);
        }
        cout << n - best << "\n";
    }
}