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
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }
        vector<ll> b;
        for (int x : a)
        {
            if (b.empty() || b.back() != x)
                b.push_back(x);
        }
        if (b.size() == 1) {
            cout << 1 << "\n";
            continue;
        }
        int ans=2;
        for (int i = 1; i+1 <b.size() ; i++)
        {
            if ((b[i] - b[i - 1]) * (b[i + 1] - b[i]) < 0)
                ans++;
        }
        cout << ans << "\n";
    }
}