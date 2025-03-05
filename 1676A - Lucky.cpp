#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        if ((t / 100000 + (t % 100000) / 10000 + (t % 10000) / 1000) == ((t % 10) + (t % 100) / 10) + (t % 1000) / 100)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}