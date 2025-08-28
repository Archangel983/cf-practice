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
        ll n, a, b;
        cin >> n >> a >> b;
        if (n % 2 == 0)
        {
            if (b % 2 == 0 && a % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else if (a < b && b % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            if (a % 2 == 1 && b % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else if (a < b && b % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
