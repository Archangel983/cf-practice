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
            cin >> a[i];
        }
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = a[i]; j <= 2 * n; j += a[i])
            {
                int k = j - i;
                if (k > i && k <= n && a[i] *1LL* a[k] == i + k)
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
}