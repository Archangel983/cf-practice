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
        int n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
        {
            b[i] = i;
        }
        b[r] = l - 1;
        for (int i = 1; i <= n; i++)
            a[i] = b[i] ^ b[i - 1];
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}