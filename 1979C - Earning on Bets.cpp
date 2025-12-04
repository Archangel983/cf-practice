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
        int z = 1;
        for (int i = 0; i < n; i++)
        {
            z = lcm(z, a[i]);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += z / a[i];
        }
        if (sum < z)
        {
            for (int i = 0; i < n; i++)
            {
                cout << z / a[i] << " ";
            }
            cout << "\n";
        }
        else
            cout << -1 << "\n";
    }
}