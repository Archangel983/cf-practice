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
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        int idx = 0;
        ll best = LLONG_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] < best)
            {
                best = a[i+1] - a[i];
                idx = i;
            }
        }
        vector<ll> ans;
        ans.push_back(a[idx]);
        for (int i = idx + 2; i < n; i++)
            ans.push_back(a[i]);
        for (int i = 0; i < idx; i++)
            ans.push_back(a[i]);
        ans.push_back(a[idx + 1]);
        for (auto x : ans)
            cout << x << " ";
        cout << "\n";
    }
}