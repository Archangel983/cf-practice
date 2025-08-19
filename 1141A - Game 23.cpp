#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    if (m % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    long long int diff = m / n;
    int moves = 0;
    while (diff % 2 == 0)
    {
        diff /= 2;
        moves++;
    }
    while (diff % 3 == 0)
    {
        diff /= 3;
        moves++;
    }
    if (diff != 1)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << moves << endl;
}