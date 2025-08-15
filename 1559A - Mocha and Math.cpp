#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x;
        cin >> n;
        int ans = n;
        for (int i = 0; i < x - 1; i++)
        {
            cin >> n;
            ans &= n;
        }
        cout << ans << "\n";
    }
}