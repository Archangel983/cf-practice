#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int ans = 0, len = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                len++;
            }
            else
            {
                if (len >= k)
                {
                    long long int x = len - k + 1;
                    ans += x * (x + 1) / 2;
                }
                len = 0;
            }
        }
        if (len >= k)
        {
            long long int x = len - k + 1;
            ans += x * (x + 1) / 2;
        }
        cout << ans << endl;
    }
}