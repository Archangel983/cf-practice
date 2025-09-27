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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll dec = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b = a;
        sort(b.begin(), b.end());
        unordered_map<ll, int> pos;
        for (int i = 0; i < n; i++)
        {
            pos[b[i]] = i;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (pos[a[i + 1]] != pos[a[i]] + 1)
            {
                dec++;
            }
        }
        if (dec + 1 <= k)
        {
            cout << "Yes" << "\n";
        }
        else
            cout << "No" << "\n";
    }
}