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
        vector<ll> a(n + 1), prefix(n + 1, 0), suffix(n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        suffix[n] = a[n];
        for (int i = n - 1; i >= 1; i--)
        {
            suffix[i] = suffix[i + 1] + a[i];
        }
        int i = 1, j = n;
        int ans = 0;
        while (i < j)
        {
            if (prefix[i] == suffix[j])
            {
                ans = max(ans, i + (n - j + 1));
                i++;
                j--;
            }
            else if (prefix[i] < suffix[j])
                i++;
            else
                j--;
        }
        cout << ans << "\n";
    }
    return 0;
}