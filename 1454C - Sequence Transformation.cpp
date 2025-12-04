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
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || a[i] != a[i - 1])
                cnt[a[i]]++;
        }
        for (auto &p : cnt)
        {
            if (a[0] == p.first)
                p.second--;
            if (a[n - 1] == p.first)
                p.second--;
        }
        int ans = INT_MAX;
        for (auto &p : cnt)
            ans = min(ans, p.second);
        cout<<ans+1<<"\n";
    }
}