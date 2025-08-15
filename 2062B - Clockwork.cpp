#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        bool possible = true;
        cin >> n;
        for (long long int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            long long int dist = 2 * max(i, n - i - 1);
            if (x <= dist)
            {
                possible = false;
            }
        }
        if (possible)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}