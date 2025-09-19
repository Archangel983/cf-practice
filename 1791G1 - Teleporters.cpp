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
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> prefix(n, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i] = (i + 1) + a[i];
        }
        sort(prefix.begin(), prefix.end());
        int i = 0;
        ll sum = 0;
        int count = 0;
        while (i < n && sum + prefix[i] <= c)
        {
            sum += prefix[i];
            count++;
            i++;
        }
        cout << count << "\n";
    }
}