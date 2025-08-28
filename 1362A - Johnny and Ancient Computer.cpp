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
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        ll big = max(a, b);
        ll small = min(a, b);
        if (big % small != 0)
        {
            cout << -1 << endl;
            continue;
        }
        ll ratio = big / small;
        if ((ratio & (ratio - 1)) != 0)
        {
            cout << -1 << endl;
            continue;
        }
        int k = 0;
        while (ratio > 1)
        {
            ratio /= 2;
            k++;
        }
        int steps = 0;
        steps += k / 3;
        k %= 3;
        steps += k / 2;
        k %= 2;
        steps += k;
        cout << steps << endl;
    }
}