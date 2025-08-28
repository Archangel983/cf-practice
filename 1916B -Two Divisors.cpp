#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll gcd = __gcd(a, b);
        ll l = a * b;
        l /= gcd;
        if (l > b)
            cout << l << endl;
        else
            cout << b * (b / a) << endl;
    }
}