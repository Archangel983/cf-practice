#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int minmoves = (n + 1) / 2;
    int ans = ((minmoves + m - 1) / m) * m;
    if (ans <= n)
    {
        cout << ans << endl;
    }
    else
        cout << -1 << endl;
}