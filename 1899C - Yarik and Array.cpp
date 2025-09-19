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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int ans = a[0];
        int sum = a[0];
        int mn = min(0, a[0]);
        for (int i = 1; i < n; ++i)
        {
            if ((a[i] & 1) == (a[i - 1] & 1))
            {
                sum = 0;
                mn = 0;
            }
            sum += a[i];
            ans = max(ans, sum - mn);
            mn = min(mn, sum);
        }
        cout << ans << "\n";
    }
}
