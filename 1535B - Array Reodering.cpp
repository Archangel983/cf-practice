#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), [](int x, int y)
             { return (x % 2 == 0) > (y % 2 == 0); });
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(v[i], 2 * v[j]) > 1)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}