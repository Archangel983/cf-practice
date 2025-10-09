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
        {
            cin >> x;
        }
        for (int b = 0; b <= 60; b++)
        {
            int cnt = 0;
            for (auto &x : a)
                if ((x >> b) & 1LL)
                    cnt++;
            if (cnt != n && cnt != 0)
            {
                ll k = 1LL << (b + 1);
                cout << k << "\n";
                break;
            }
        }
    }
}