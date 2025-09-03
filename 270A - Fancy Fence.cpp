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
        int a;
        cin >> a;
        int n = 180 - a;
        if (n != 0 && 360 % n == 0)
        {
            int denom = 360 / n;
            if (denom >= 3)
                cout << "YES" << '\n';

            else
                cout << "NO" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    return 0;
}