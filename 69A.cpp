#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, d = 0, e = 0, f = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        d += a, e += b, f += c;
    }
    if (d == 0 && e == 0 && f == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}