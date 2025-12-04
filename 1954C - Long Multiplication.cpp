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
        string x, y;
        cin >> x >> y;
        bool greater = false;
        int a = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if (!greater)
            {
                if (x[i] > y[i])
                {
                    a = 1;
                    greater = true;
                    continue;
                }
                else if (y[i] > x[i])
                {
                    a = 2;
                    greater = true;
                    continue;
                }
            }
            if (greater)
            {
                if (a == 1)
                {
                    if (x[i] > y[i])
                        swap(x[i], y[i]);
                }
                else if (a == 2)
                {
                    if (x[i] < y[i])
                        swap(x[i], y[i]);
                }
            }
        }
        cout << x << "\n" << y << "\n";
    }
}