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
        int a, b, c;
        cin >> a >> b >> c;
        ll g = 1;
        for (int i = 1; i < c; i++)
            g *= 10;
        ll x = g;
        for (int i = 1; i <= a - c; i++)
            x *= 10;
        ll y = g;
        for (int i = 1; i <= b - c; i++)
            y *= 10;
        y += g;
        cout << x << " " << y << "\n";
    }
}
