#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        bool ok = false;
        for (int b = 0; b <= 1000; b++)
        {
            int rem = num - b * 2021;
            if (rem < 0)
                break;
            if (rem % 2020 == 0)
            {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
