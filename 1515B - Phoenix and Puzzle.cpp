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
        ll n;
        cin >> n;
        ll y = sqrt(n / 2);
        ll x = sqrt(n / 4);
        if (n % 2 == 0 && y * y == (n / 2))
        {
            cout << "YES" << endl;
        }
        else if (n % 4 == 0 && x * x == (n / 4))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}