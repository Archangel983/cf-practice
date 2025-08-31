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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int r1 = a, k1 = b, r2 = c - a, k2 = d - b;
        if (max(r1, k1) <= min(r1, k1) * 2 + 2 and max(r2, k2) <= min(r2, k2) * 2 + 2)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
