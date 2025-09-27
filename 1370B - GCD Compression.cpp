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
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        vector<int> odd, evens;
        for (int i = 0; i < 2 * n; i++)
        {
            if (a[i] % 2 == 0)
            {
                evens.push_back(i + 1);
            }
            else
                odd.push_back(i + 1);
        }
        vector<pair<int, int>> ans;
        for (int i = 0; i+1 < odd.size(); i += 2)
        {
            ans.push_back({odd[i], odd[i + 1]});
        }
        for (int i = 0; i+1 < evens.size(); i += 2)
        {
            ans.push_back({evens[i], evens[i + 1]});
        }
        while (ans.size() > n - 1)
        {
            ans.pop_back();
        }
        for (auto [x, y] : ans)
        {
            cout << x << " " << y << "\n";
        }
    }
}