#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int d, sum;
    cin >> d >> sum;
    vector<int> mn(d), mx(d), res(d);
    int a = 0, b = 0;
    for (int i = 0; i < d; i++)
    {
        cin >> mn[i] >> mx[i];
        a += mn[i];
        b += mx[i];
        res[i] = mn[i];
    }
    if (sum < a || sum > b)
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
        int rem = sum - a;
        for (int i = 0; i < d && rem > 0; i++)
        {
            int can = mx[i] - mn[i];
            int add = min(can, rem);
            res[i] += add;
            rem -= add;
        }
        for (int i = 0; i < d; i++)
            cout << res[i] << " ";
        cout << "\n";
    }
}