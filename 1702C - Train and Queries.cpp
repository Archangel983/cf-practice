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
        int n, k;
        cin >> n >> k;
        map<int, int> first, last;
        for (int i = 1; i <= n; i++)
        {
            int u;
            cin >> u;
            if (!first.count(u))
                first[u] = i;
            last[u] = i;
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            if (first.count(a) && last.count(b) && first[a] < last[b])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
