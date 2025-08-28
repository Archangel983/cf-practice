#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int prefix_sum = 0, maxele = 0, good = 0;
        for (int i = 0; i < n; i++)
        {
            prefix_sum += v[i];
            maxele = max(v[i], maxele);
            if (prefix_sum == 2 * maxele)
            {
                good++;
            }
        }
        cout << good << endl;
    }
}