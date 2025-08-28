#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        int overlap = min(r, R) - max(l, L) + 1;
        if (overlap <= 0)
        {
            cout << 1 << endl;
        }
        else
        {
            int ans = overlap - 1;
            if (l != L)
                ans++;
            if (r != R)
                ans++;
            cout << ans << endl;
        }
    }
}