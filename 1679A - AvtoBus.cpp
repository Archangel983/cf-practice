#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n < 4 || n % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        long long max_buses = n / 4;
        long long min_buses = -1;
        long long max_three_axle = n / 6;
        for (long long three = max_three_axle; three >= 0; three--)
        {
            long long rem = n - 6 * three;
            if (rem % 4 == 0)
            {
                long long two = rem / 4;
                min_buses = two + three;
                break;
            }
        }

        if (min_buses == -1)
            cout << -1 << endl;
        else
            cout << min_buses << " " << max_buses << endl;
    }
}
