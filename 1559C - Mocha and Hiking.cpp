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
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        if (a[0] == 1)
        {
            cout << n + 1 << " ";
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else if (a[n - 1] == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << n + 1 << "\n";
        }
        else
        {
            int b = -1;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 1 && a[i - 1] == 0)
                {
                    b = i;
                    break;
                }
            }
            if (b == -1)
            {
                cout << -1 << "\n";
                continue;
            }
            for (int i = 1; i < b + 1; i++)
            {
                cout << i << " ";
            }
            cout << n + 1 << " ";
            for (int i = b + 1; i < n + 1; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
}