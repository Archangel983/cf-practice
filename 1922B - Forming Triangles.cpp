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
        map<int, int> num;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            num[x]++;
        }
        ll res = 0;
        int sum = 0;
        for (auto it : num)
        {
            ll cnt = it.second;
            if (cnt >= 3)
            {
                res += cnt * (cnt - 1) * (cnt - 2) / 6;
            }
            if (cnt >= 2)
            {
                res += cnt * (cnt - 1) / 2 * sum;
            }
            sum += cnt;
        }
        cout << res << "\n";
    }
}