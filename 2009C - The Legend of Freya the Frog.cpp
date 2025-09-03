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
        ll x, y, k;
        cin >> x >> y >> k;
        ll nx = (x + k - 1) / k;
        ll ny = (y + k - 1) / k;
        if (nx == ny)
        {
            cout << nx * 2 << "\n";
        }
        else if (nx > ny)
        {
            cout << (2 * nx) -1 << "\n";
        }
        else
            cout << (2 * ny)  << "\n";
    }
}