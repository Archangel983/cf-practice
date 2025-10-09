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
        int i = 0, j = n - 1;
        int mn = 1, mx = n;
        while (i < j && (a[i] == mn || a[i] == mx || a[j] == mn || a[j] == mx))
        {
            if (a[i] == mn)
            {
                i++;
                mn++;
            }
            else if (a[i] == mx)
            {
                i++;
                mx--;
            }
            else if (a[j] == mn)
            {
                j--;
                mn++;
            }
            else if (a[j] == mx)
            {
                j--;
                mx--;
            }
        }
        if (i < j)
            cout << (i + 1) << " " << (j + 1) << "\n";
        else
            cout << -1 << "\n";
    }
}