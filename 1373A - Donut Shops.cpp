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
        ll a, b, c;
        cin >> a >> b >> c;
        ll x1 = (a < c ? 1 : -1);
        ll x2 = (c < a * b ? b : -1);
        cout << x1 << " " << x2 << endl;
    }
    return 0;
}