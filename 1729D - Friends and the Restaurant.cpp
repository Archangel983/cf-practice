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
        vector<ll> b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;
        vector<ll> diff(n);
        for (int i = 0; i < n; i++)
        {
            diff[i] = b[i] - a[i];
        }
        sort(diff.begin(), diff.end());
        int l = 0, r = n - 1;
        int g = 0;
        while (l < r)
        {
            if (diff[l] + diff[r] >= 0)
            {
                g++;
                l++;
                r--;
            }
            else
            {
                l++;
            }
        }
        cout << g << "\n";
    }
}