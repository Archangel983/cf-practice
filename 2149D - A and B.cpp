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
        int a = 0, b = 0;
        for (int i = 0; i < n;)
        {
            if (s[i] == 'a')
            {
                a++;
                while (i < n && s[i] == 'a')
                    i++;
            }
            else
            {
                i++;
            }
        }
        for (int i = 0; i < n;)
        {
            if (s[i] == 'b')
            {
                b++;
                while (i < n && s[i] == 'b')
                    i++;
            }
            else
            {
                i++;
            }
        }
        int ans = max(0, min(a, b) - 1);
        cout << ans << "\n";
    }

    return 0;
}
