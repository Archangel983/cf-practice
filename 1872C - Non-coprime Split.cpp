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
        ll l, r;
        cin >> l >> r;
        if (r < 4)
            cout << -1 << "\n";
        else if (r - l >= 1)
        {
            ll s = r;
            if (s % 2 != 0)
                s--;
            cout << s / 2 << " " << s / 2 << "\n";
        }
        else if (l == r)
        {
            if (r % 2 == 0)
            {
                cout << r / 2 << " " << r / 2 << "\n";
            }
            else
            {
                int d = -1;
                for (int i = 2; i * i <= l; i++)
                {
                    if (l % i == 0)
                    {
                        d = i;
                        break;
                    }
                }
                if (d == -1)
                    cout << -1 << "\n";
                else
                    cout << d << " " << l - d << "\n";
            }
        }
    }
}