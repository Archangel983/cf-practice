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
        ll c, m, x;
        cin >> c >> m >> x;
        ll teams = min(min(c, m), ((c + m + x) / 3));
        cout << teams << "\n";
    }
}