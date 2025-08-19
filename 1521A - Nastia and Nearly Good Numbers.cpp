#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char **argv)
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            long long int x = a;
            long long int y = a * b;
            long long int z = a * (b + 1);
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
    }
    return 0;
}