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
        vector<ll> v(k);
        for (auto &x : v)
            cin >> x;
        sort(v.rbegin(), v.rend());
        ll steps = 0;
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            count += (n - v[i]);
            if (count < n)
                steps++;
            else
                break;
        }
        cout << steps << endl;
    }
    return 0;
}