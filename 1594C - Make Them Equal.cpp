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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s = ' ' + s;
        int ans = -1;
        if (count(s.begin(), s.end(), c) == n)
        {
            cout << 0 << "\n";
            continue;
        }
        for (int x = 1; x <= n; x++)
        {
            bool ok = true;
            for (int i = x; i <= n; i += x)
            {
                if (s[i] != c)
                {
                    ok = false;
                }
            }
            if (ok)
            {
                ans = x;
                break;
            }
        }
        if (ans == -1)
        {
            cout << 2 << "\n"
                 << n << " " << n - 1 << "\n";
        }
        else
            cout << 1 << "\n"
                 << ans << "\n";
    }
}