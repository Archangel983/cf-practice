#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long int prev = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            long long int gap = v[i] - prev;
            long long cost = min(gap * a, b);
            f -= cost;
            if (f <= 0)
            {
                ok = false;
                break;
            }
            prev = v[i];
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}