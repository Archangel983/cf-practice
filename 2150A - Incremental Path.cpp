#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<ll> a;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        int cur = 1;
        for (char c : s)
        {
            cur++;
            if (c == 'B')
            {
                while (a.count(cur))
                    cur++;
            }
            a.insert(cur);
            if (c == 'B')
            {
                while (a.count(cur))
                    cur++;
            }
        }
        cout << a.size() << "\n";
        for (auto &x : a)
            cout << x << " ";
        cout << "\n";
    }
}