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
        vector<ll> a(n + 2);
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        ll sum = 0;
        for (int i = 0; i < n + 1; i++)
            sum += a[i];
        bool found = false;
        for (int i = 0; i < n + 1; i++)
        {
            if (sum - a[i] == a[n + 1])
            {
                found = true;
                for (int j = 0; j < n + 1; j++)
                {
                    if (j == i)
                        continue;
                    cout << a[j] << " ";
                }
                cout << "\n";
                break;
            }
        }
        if (found)
            continue;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        if (sum == a[n])
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}