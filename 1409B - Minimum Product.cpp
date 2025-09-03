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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll newa = a - min(n, a - x);
        ll newb = b - min(n - min(n, a - x), b - y);
        ll prod1 = newa * newb;
        ll newb1 = b - min(n, b - y);
        ll newa1 = a - min(n - min(n, b - y), a - x);
        ll prod2 = newa1 * newb1;
        cout << min(prod1, prod2) << "\n";
    }
}