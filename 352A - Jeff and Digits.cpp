#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, count5 = 0, count0 = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 5)
        {
            count5++;
        }
        else
            count0++;
    }
    if (count5 >= 9 && count0 > 0)
    {
        for (int i = 0; i < count5/9; i++)
        {
            cout << 555555555;
        }
        for (int i = 0; i < count0; i++)
        {
            cout << 0;
        }
        cout << endl;
    }
    else if (count5 < 9 and count0 > 0)
    {
        cout << 0 << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}