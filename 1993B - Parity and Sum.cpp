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
        int n;
        cin >> n;
        vector<ll> evens;
        ll maxodd = -1;
        int ops = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 == 0)
                evens.push_back(x);
            else
                maxodd = max(maxodd, x);
        }
        if (evens.empty() || maxodd == -1)
        {
            cout << 0 << '\n';
            continue;
        }
        sort(evens.begin(), evens.end());
        for (int i = 0; i < evens.size(); i++)
        {
            if (evens[i] < maxodd)
            {
                maxodd += evens[i];
                ops++;
            }
            else
            {
                int rem = evens.size() - i;
                ops += rem + 1;
                break;
            }
        }
        cout << ops << "\n";
    }
}