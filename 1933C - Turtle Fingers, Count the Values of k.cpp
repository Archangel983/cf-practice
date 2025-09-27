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
        ll a, b, l;
        cin >> a >> b >> l;
        set<int> k;
        ll ax = 1;
        for (int i = 0; ax <= l; i++)
        {
            ll by = 1;
            for (int j = 0; ax * by <= l; j++)
            {
                if (l % (ax * by) == 0)
                {
                    k.insert(l / (ax * by));
                }
                by *= b;
            }
            ax *= a;
        }
        cout << k.size() << "\n";
    }
}