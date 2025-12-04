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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> a;
        for (int i = 0; i < n; ++i)
            if (s[i] == '1')
                a.push_back(i);
        if (a.empty())
        {
            cout << 0 << '\n';
            continue;
        }
        int ans = 1;
        int last = a[0];
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] - last >= k)
                ans++;
            last = a[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
