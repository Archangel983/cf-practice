#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, i, j;
        cin >> n >> m >> i >> j;
        vector<pair<long long int, long long int>> corners = {{1, 1}, {1, m}, {n, m}, {n, 1}};
        long long int best = -1;
        pair<long long int, long long int> ans1, ans2;
        for (auto c1 : corners)
        {
            for (auto c2 : corners)
            {
                long long int total = abs(i - c1.first) + abs(j - c1.second) + abs(c1.first - c2.first) + abs(c1.second - c2.second) + abs(c2.first - i) + abs(c2.second - j);
                if (total > best)
                {
                    best = total;
                    ans1 = c1;
                    ans2 = c2;
                }
            }
        }
        cout << ans1.first << " " << ans1.second << " "
             << ans2.first << " " << ans2.second << "\n";
    }
}