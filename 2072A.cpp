#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        if ((n * p) > abs(k))
        {
            int ans = (abs(k) / p);
            if ((ans * p) == abs(k))
            {
                cout << ans << endl;
            }
            else
            {
                cout << ans + 1 << endl;
            }
        }
        else if ((n * p) < abs(k))
        {
            cout << "-1" << endl;
        }
        else if (n == p && (n * p) > abs(k))
        {
            int ans = (abs(k) / p);
            if ((ans * p) == abs(k))
            {
                cout << ans << endl;
            }
            else
            {
                cout << ans + 1 << endl;
            }
        }
        else if (n * p == abs(k))
        {
            int ans = (abs(k) / p);
            if ((ans * p) == abs(k))
            {
                cout << ans << endl;
            }
            else
            {
                cout << ans + 1 << endl;
            }
        }
    }
    return 0;
}