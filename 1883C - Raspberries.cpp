#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = INT_MAX;
        if (k == 2 || k == 3 || k == 5)
        {
            for (int x : v)
            {
                ans = min(ans, (((x + k - 1) / k) * k) - x);
            }
            cout << ans << endl;
        }
        else
        {
            int ans1 = INT_MAX;
            vector<int> evens;
            for (int x : v)
            {
                ans1 = min(ans1, (4 - (x % 4)) % 4);
                int even = (2 - (x % 2)) % 2;
                evens.push_back(even);
            }
            sort(evens.begin(), evens.end());
            int ans2 = evens[0] + evens[1];
            ans = min(ans1, ans2);
            cout << ans << endl;
        }
    }
}