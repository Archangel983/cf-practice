#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string res = "-1";
        if (n == 1 || n == 3)
        {
            res="-1";
        }
        else if (n % 2 == 0)
        {
            res = string(n - 2, '3') + "66";
        }
        else
            res = string(n - 5, '3') + "36366";
        cout << res << endl;
    }
}