#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;
    if (x == x1)
    {
        ll side = abs(y1 - y);
        cout << x + side << " " << y << " " << x1 + side << " " << y1 << "\n";
    }
    else if (y == y1)
    {
        int side = abs(x1 - x);
        cout << x << " " << y + side << " " << x1 << " " << y1 + side << "\n";
    }
    else if (abs(x1 - x) == abs(y1 - y))
    {
        cout << x << " " << y1 << " " << x1 << " " << y << "\n";
    }
    else
        cout << -1 << "\n";
}