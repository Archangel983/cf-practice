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
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        if (c == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        int lastG = -1;
        for (int i = 2 * n; i >= 0; i--)
        {
            if (s[i % n] == 'g')
            {
                lastG = i;
            }
            if (i < n && s[i] == c && lastG != -1)
            {
                ans = max(ans, lastG - i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
