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
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        vector<pair<int, int>> A, B, C;
        for (int i = 0; i < n; i++)
            A.push_back({a[i], i});
        for (int i = 0; i < n; i++)
            B.push_back({b[i], i});
        for (int i = 0; i < n; i++)
            C.push_back({c[i], i});
        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());
        sort(C.rbegin(), C.rend());
        if (A.size() > 3)
            A.resize(3);
        if (B.size() > 3)
            B.resize(3);
        if (C.size() > 3)
            C.resize(3);
        ll ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    ll av = A[i].first, bv = B[j].first, cv = C[k].first, ai = A[i].second, bi = B[j].second, ci = C[k].second;
                    if (ai != bi && ai != ci && bi != ci)
                    {
                        ans = max(ans, av + bv + cv);
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}