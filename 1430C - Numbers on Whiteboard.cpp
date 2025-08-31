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
        int n;
        cin >> n;
        cout << 2 << '\n';
        int x = n;
        for (int i = n - 1; i >= 1; i--)
        {
            cout << x << " " << i << '\n';
            x = (x + i + 1) / 2;
        }
    }
    return 0;
}