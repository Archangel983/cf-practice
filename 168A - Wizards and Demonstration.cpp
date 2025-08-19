#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, y;
    long long int x;
    cin >> n >> x >> y;
    long long int total = x;
    while (total < (double)((y/100)*n))
    {
        total++;
    }
    cout << total - x << endl;
}