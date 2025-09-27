#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll l, r;
    cin >> l >> r;
    if (r - l + 1 < 3)
    {
        cout << -1 << "\n";
    }
    else
    {
        if (l % 2 == 0)
        {
            cout << l << " " << l + 1 << " " << l + 2 << "\n";
        }
        else if (l % 2 != 0)
        {
            if (l + 3 > r)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << l + 1 << " " << l + 2 << " " << l + 3 << "\n";
            }
        }
    }
}