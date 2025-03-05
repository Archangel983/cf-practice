#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, maxi, mini;
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            maxi = a;
        }
        else if (b > a && b > c)
            maxi = b;
        else if (c > a && c > b)
            maxi = c;
        if (a < b && a < c)
        {
            mini = a;
        }
        else if (b < a && b < c)
        {
            mini = b;
        }
        else if (c < a && c < b)
        {
            mini = c;
        }
        if (mini != a && maxi != a)
            cout << a << endl;
        else if (mini != b && maxi != b)
            cout << b << endl;
        else if (mini != c && maxi != c)
            cout << c << endl;
    }
}