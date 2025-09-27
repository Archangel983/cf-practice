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
        int a, b, c;
        cin >> a >> b >> c;
        ll sum = a + b + c;
        if (sum % 9 == 0 && min({a, b, c}) >= sum / 9)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}