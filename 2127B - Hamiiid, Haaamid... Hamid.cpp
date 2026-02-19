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
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        if (x == 1 || x == n)
        {
            cout << "1\n";
            continue;
        }
        x--;
        int inf = INT_MAX;
        int l = -inf;
        int r = inf;
        for (int i = x - 1; i >= 0; i--)
        {
            if (s[i] == '#')
            {
                l = i;
                break;
            }
        }
        for (int i = x + 1; i < n; i++)
        {
            if (s[i] == '#')
            {
                r = i;
                break;
            }
        }
        if (l == -inf && r == inf)
        {
            cout << "1\n";
            continue;
        }
        cout << max(min(x + 1, n - r + 1), min(l + 2, n - x)) << "\n";
    }
}
