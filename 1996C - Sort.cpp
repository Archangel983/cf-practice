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
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        vector<vector<int>> prefa(26, vector<int>(n + 1, 0));
        vector<vector<int>> prefb(26, vector<int>(n + 1, 0));

        for (int i = 1; i <= n; i++)
        {
            for (int c = 0; c < 26; c++)
            {
                prefa[c][i] = prefa[c][i - 1];
                prefb[c][i] = prefb[c][i - 1];
            }
            prefa[a[i - 1] - 'a'][i]++;
            prefb[b[i - 1] - 'a'][i]++;
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int ans = 0;
            for (int c = 0; c < 26; c++)
            {
                int cnta = prefa[c][r] - prefa[c][l - 1];
                int cntb = prefb[c][r] - prefb[c][l - 1];
                if (cntb > cnta)
                {
                    ans += (cntb - cnta);
                }
            }
            cout << ans << "\n";
        }
    }
}