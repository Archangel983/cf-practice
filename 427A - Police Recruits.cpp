#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, c = 0, e;
    cin >> n;
    while (n--)
    {
        cin >> e;
        if (e == (-1))
        {
            if (c == 0)
            {
                count++;
            }
            if (c > 0)
            {
                c--;
            }
        }
        else if (e > 0)
        {
            c += e;
        }
    }
    cout << count << endl;
}