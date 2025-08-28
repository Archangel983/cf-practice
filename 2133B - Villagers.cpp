#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto &x : v)
            cin >> x;
        sort(v.begin(), v.end(), greater<int>());
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum += v[i];
            }
        }
        cout << sum << endl;
    }
}