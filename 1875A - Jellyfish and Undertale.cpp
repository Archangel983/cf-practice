#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n;
        cin >> a >> b >> n;
        long long cap = a - 1;
        long long ans = b;
        for (int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            ans += min(x, cap);     
        }
        cout << ans << endl;
    }
}