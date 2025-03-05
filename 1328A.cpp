#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a, b, c = 0, d = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << "0" << endl;
            continue;
        }
        c = a / b;
        d = (c + 1) * b;
        cout << d - a << endl;
    }
}