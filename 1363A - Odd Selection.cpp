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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
                odd++;
            else
                even++;
        }
        if (odd == 0)
        {
            cout << "No\n";
            continue;
        }
        if (x == n)
        {
            long long sum = 0;
            for (int v : a)
                sum += v;
            if (sum % 2 == 1)
                cout << "Yes\n";
            else
                cout << "No\n";
            continue;
        }
        if (x % 2 == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            if (even > 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}
