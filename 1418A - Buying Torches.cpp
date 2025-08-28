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
        ll sticks = k * (y + 1);
        ll trades = (sticks -1 + (x - 2)) / (x - 1);
        cout << trades + k << endl;
    }
    return 0;
}