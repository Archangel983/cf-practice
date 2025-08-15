#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string pattern = "";
        for (int i = 0; i < a; i++)
        {
            pattern += char('a' + (i % b));
        }
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            ans += pattern[i % a];
        }
        cout << ans << "\n";
    }
}
