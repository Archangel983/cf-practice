#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x;
    cin >> n >> x;
    long long int sum = 0;
    for (long long int i = 1; i <= n; i++)
    {
        if (x % i == 0 && x / i <= n)
        {
            sum++;
        }
    }
    cout << sum << endl;
}