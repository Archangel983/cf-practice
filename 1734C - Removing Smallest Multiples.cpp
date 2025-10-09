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
        string s;
        cin >> n >> s;
        s = ' ' + s;
        vector<ll> mis(n + 1, 0);
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (s[j] == '1')
                    break;
                else
                {
                    if (mis[j] == 0)
                    {
                        mis[j] = i;
                        ans += i;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}