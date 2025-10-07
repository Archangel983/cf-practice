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
        ll n, x, y;
        cin >> n >> x >> y;
        ll cntx = n / x;
        ll cnty = n / y;
        ll both = n / lcm(x, y);
        ll pos = cntx - both;
        ll neg = cnty - both;
        ll sumpos = pos * (2 * n - pos + 1) / 2;
        ll sumneg = neg * (neg + 1) / 2;
        cout << sumpos - sumneg << "\n";
    }
}