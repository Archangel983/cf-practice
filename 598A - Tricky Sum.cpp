#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, sum;
        cin >> n;
        sum=n*(n+1)/2;
        long long int a = 1;
        while (a <= n)
        {
            sum -= 2 * a;
            a *= 2;
        }
        cout << sum << endl;
    }
}