#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int a, b, c;

        cin >> a >> b >> c;
        if ((a > c && b > c) || (b > a && c > a) || (a > b && c > b) || (a == 1 && a == b & b == c))
        {
            count++;
        }
    }
    cout << count;
}
