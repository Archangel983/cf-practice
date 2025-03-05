#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, count = 0;
    cin >> k >> r;
    for (int i = 1; i <= k * 10; i++)
    {
        if ((i * k) % 10 == 0 || (i * k) % 10 == r)
        {
            count++;
            cout << count << endl;
            return 0;
        }
        else
        {
            count++;
        }
    }
}