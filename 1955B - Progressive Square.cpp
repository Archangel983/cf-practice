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
        ll c, d;
        cin >> n >> c >> d;
        int m = n * n;
        vector<ll> b(m);
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(b.begin(), b.end());
        ll a11 = b[0];
        vector<ll> expected;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                expected.push_back(a11 + i * c + j * d);
            }
        }
        sort(expected.begin(),expected.end());
        if (expected == b)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}