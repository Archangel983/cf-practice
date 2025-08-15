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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > b)
            swap(a, b);
        bool c_between = (c > a && c < b);
        bool d_between = (d > a && d < b);
        if (c_between ^ d_between)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
