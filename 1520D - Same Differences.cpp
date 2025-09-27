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
        map<int, int> a;
        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x -= i;
            res += a[x];
            a[x]++;
        }
        cout << res << "\n";
    }
}