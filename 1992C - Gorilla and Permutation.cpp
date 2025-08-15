#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        for (int x = n; x >= k; --x) cout << x << ' ';
        for (int x = m + 1; x < k && x <= n; x++)
            cout << x << " ";
        for (int x = 1; x <= m; x++)
            cout << x << " ";
        cout << "\n";
    }
}