#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> cards(n, vector<int>(m));
        vector<int> perm(n, -16);
        bool ok = true;
        int cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
                cin >> cards[i][j];

            int mn = *min_element(cards[i].begin(), cards[i].end());
            if (mn < n)
                perm[mn] = cnt++;
            ok &= (mn < n);

            sort(cards[i].begin(), cards[i].end());
            int last = cards[i][0] - n;
            for (int x : cards[i])
            {
                ok &= (last + n == x);
                last = x;
            }
        }

        if (!ok)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int x : perm)
                cout << x + 1 << ' ';
            cout << '\n';
        }
    }

    return 0;
}
