#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int sum = 0, curr = 1;
    for (long long int i = 0; i < m; i++)
    {
        long long int val;
        cin >> val;
        if (val >= curr)
            sum += val - curr;
        else
            sum += (n - curr) + val;
        curr = val;
    }
    cout << sum << endl;
}