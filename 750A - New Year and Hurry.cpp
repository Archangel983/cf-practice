#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, total = 240, count = 0;
    cin >> n >> k;
    total -= k;
    for (int i = 1; i <= n; i++)
    {
        if ((i * 5) <=  total)
        {
            count++;
            total -= (i * 5);
        }
    }
    cout << count << endl;
}