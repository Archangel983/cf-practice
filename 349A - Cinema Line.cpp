#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int c25 = 0, c50 = 0;
    bool ok = true;
    while (n--)
    {
        int ruble;
        cin >> ruble;
        if (ruble == 25)
        {
            c25++;
        }
        else if (ruble == 50)
        {
            if (c25 >= 1)
            {
                c25--;
                c50++;
            }
            else
            {
                ok = false;
                break;
            }
        }
        else if (ruble == 100)
        {
            if (c25 >= 3 || (c25 >= 1 && c50 >= 1))
            {
                if (c25 >= 1 && c50 >= 1)
                {
                    c50--;
                    c25--;
                }
                else if (c25 >= 3)
                {
                    c25 -= 3;
                }
            }
            else
            {
                ok = false;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << "\n";
}