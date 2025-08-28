#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
bool can(ll n, ll m)
{
    if (n == m)
        return true;
    if (n < m || n % 3 != 0)
        return false;
    return can(n / 3, m) || can(2 * n / 3, m);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        cout << (can(n, m) ? "YES" : "NO") << endl;
    }
}