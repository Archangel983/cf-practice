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
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i <= s.size() - 2; i++)
        {
            if (s[i] != s[i + 2])
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
}