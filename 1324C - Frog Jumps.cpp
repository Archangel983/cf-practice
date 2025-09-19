#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = (int)s.size();
        int last = 0;
        int ans = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (s[i - 1] == 'R')
            {
                ans = max(ans, i - last);
                last = i;
            }
        }
        ans = max(ans, (n + 1) - last);
        cout << ans << "\n";
    }
    return 0;
}
