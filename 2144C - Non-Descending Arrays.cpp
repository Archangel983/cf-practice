#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 998244353;
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
        vector<int> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &y : b)
            cin >> y;
        int ans = 1;
        for (int i = 0; i < n; i++)
        {   
            if (a[i] > b[i])
                swap(a[i], b[i]);
            if (!i || a[i] >= b[i - 1])
                ans = (ans * 2LL) % mod;
        }
        cout << ans << "\n";
    }
}