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
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        int diff = -1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[0])
            {
                diff = i;
                break;
            }
        }
        if (diff == -1)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[0])
                cout << i + 1 << " " << diff + 1 << "\n";
            else
            {
                cout << 1 << " " << i + 1 << "\n";
            }
        }
    }
}