#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        vector<int> pos(n + 1);
        for (int i = 1; i <= n; i++)
        {
            pos[p[i]] = i;
        }
        int g = 0;
        for (int i = 1; i <= n; i++)
        {
            g = __gcd(g, abs(pos[i] - i));
        }
        cout << g << endl;
    }
}