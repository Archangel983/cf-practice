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
        ll n;
        cin >> n;
        vector<int> a(1001, 0);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a[x] = i;
        }
        int ans = -1;
        for (int i = 1; i <= 1000; i++)
        {
            if (a[i] == 0)
                continue;
            for (int j = 1; j <= 1000; j++)
            {
                if (a[j] == 0)
                    continue;
                if (__gcd(i, j) == 1)
                {
                    ans = max(ans, a[i] + a[j]);
                }
            }
                }
        cout << ans << "\n";
    }
}