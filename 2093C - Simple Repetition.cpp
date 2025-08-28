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
        ll x, k;
        cin >> x >> k;
        if (k > 1)
        {
            if (x == 1 && k == 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            if (x <= 1)
            {
                cout << "NO" << endl;
                continue;
            }
            bool flag = true;
            for (int i = 2; i * i <= x; i++)
            {
                if (x % i == 0)
                {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "YES" << endl;
        }
    }
    return 0;
}