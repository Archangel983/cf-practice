#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll MOD = 1e9 + 7;
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
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (auto &x : b)
            cin >> x;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll ans = 1;
        int j = 0;
        for (int i = n-1; i >= 0; i--)
        {
            int pos = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            ll choices = n - pos - j;
            {
                if (choices <= 0)
                {
                    ans = 0;
                    break;
                }
            }
            ans = (ans * choices) % MOD;
            j++;
        }
        cout << ans << "\n";
    }
}