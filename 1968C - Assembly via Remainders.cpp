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
        vector<int> x(n+1);
        for (int i = 2; i <= n; i++)
        {
            cin >> x[i];
        }
        vector<ll> a(n + 1);
        a[1] = 100000;
        for (int i = 2; i <= n; i++)
        {
            a[i] = a[i - 1] + x[i];
        }
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}