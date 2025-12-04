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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(m);
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        vector<ll> gaps;
        for (int i = 0; i + 1 < m; i++)
        {
            gaps.push_back(a[i + 1] - a[i] - 1);
        }
        gaps.push_back(n - a.back() + a[0] - 1);
        sort(gaps.rbegin(), gaps.rend());
        ll saved = 0, days = 0;
        for (auto g : gaps)
        {
            ll rem = g - 2 * days;
            if (rem <= 0)
                break;
            else if (rem == 1)
            {
                days++;
                saved += 1;
            }
            else
            {
                saved += rem - 1;
                days += 2;
            }
        }
        cout << n - saved << "\n";
    }
}