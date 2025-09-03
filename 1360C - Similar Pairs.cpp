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
        int even = 0, odd = 0;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if (odd % 2 == 0 && even % 2 == 0)
        {
            cout << "YES" << "\n";
        }
        else
        {
            sort(a.begin(), a.end());
            bool ok = false;
            for (int i = 1; i < n; i++)
            {
                if (a[i] - a[i - 1] == 1)
                {
                    ok = true;
                    break;
                }
            }
            cout << (ok ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}