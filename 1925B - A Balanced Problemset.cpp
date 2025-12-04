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
        ll n, x;
        cin >> x >> n;
        ll gcd = 1;
        for (ll i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                if (x / i >= n)
                    gcd = max(gcd, i);
                if (i >= n)
                    gcd = max(gcd, x / i);
            }
        }
        cout << gcd << "\n";
    }
}