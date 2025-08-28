#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        long long int maxjoker = min(m, n / k);
        long long int rem = m - maxjoker;
        long long int secondmax = ((rem + k - 2) / (k - 1));
        cout << maxjoker - secondmax << endl;
    }
}