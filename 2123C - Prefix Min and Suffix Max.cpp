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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<int> prefix(n), suffix(n);
        prefix[0] = v[0];
        suffix[n - 1] = v[n - 1];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = min(prefix[i - 1], v[i]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            suffix[i] = max(suffix[i + 1], v[i]);
        }
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (prefix[i] == v[i] || suffix[i] == v[i])
            {
                ans += '1';
            }
            else
                ans += '0';
        }
        cout << ans << '\n';
    }
    return 0;
}