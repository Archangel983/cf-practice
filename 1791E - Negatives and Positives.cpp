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
        ll total = 0, mini = LLONG_MAX, neg = 0;
        for (auto &x : a)
        {
            cin >> x;
            total += abs(x);
            mini = min(mini, abs(x));
            if (x < 0)
                neg++;
        }
        if (neg % 2 == 1)
        {
            total -= 2 * mini;
        }
        cout << total << '\n';
    }
    return 0;
}