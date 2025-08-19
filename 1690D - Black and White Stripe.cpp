#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int whites = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
            {
                whites++;
            }
        }
        int ans = whites;
        for (int i = k; i < n; i++)
        {
            if (s[i - k] == 'W')
                whites--;
            if (s[i] == 'W')
            {
                whites++;
            }
            ans = min(ans, whites);
        }
        cout << ans << endl;
    }
}