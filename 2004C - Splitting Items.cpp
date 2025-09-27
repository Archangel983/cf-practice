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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        sort(a.rbegin(), a.rend());
        ll score = 0, rem = k;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                score += a[i];
            }
            else
            {
                ll needed = min(rem, a[i - 1] - a[i]);
                a[i] += needed;
                rem -= needed;
                score -= a[i];
            }
        }
        cout << score << "\n";
    }
}