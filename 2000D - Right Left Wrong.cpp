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
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            a[i] = a[i - 1] + x;
        }
        string s;
        cin >> s;
        s = ' ' + s;
        ll ans = 0;
        int l = 1, r = n;
        while (l < r)
        {
            if (s[l] == 'L' && s[r] == 'R')
            {
                ans += a[r] - a[l - 1];
                l++;
                r--;
            }
            else
            {
                while (l < r && s[l] != 'L')
                {
                    l++;
                }
                while (l < r && s[r] != 'R')
                {
                    r--;
                }
            }
        }
        cout << ans << "\n";
    }
}