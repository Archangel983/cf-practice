#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0 0\n";
        }
        else
        {
            long long int diff = abs(a - b);
            long long int rem = a % diff;
            long long int moves = min(rem, diff - rem);
            cout << diff << " " << moves << endl;
        }
    }
}