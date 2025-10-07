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
        ll sum = 0;
        for (auto &x : a)
        {
            cin >> x;
            sum += x;
        }
        if (sum % x != 0)
        {
            cout << n << "\n";
            continue;
        }
        int left = -1, right = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % x != 0)
            {
                left = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] % x != 0)
            {
                right = i;
                break;
            }
        }
        if (left == -1)
        {
            cout << -1 << "\n";
            continue;
        }
        cout << max(n - (left + 1), right) << "\n";
    }
}