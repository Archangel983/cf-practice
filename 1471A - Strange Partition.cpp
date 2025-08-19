#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        vector<long long int> v;
        for (long long int i = 0; i < n; i++)
        {
            long long int val;
            cin >> val;
            v.push_back(val);
        }
        long long int maxb = 0, minb = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            maxb += (v[i] + x - 1) / x;
            sum += v[i];
        }
        minb = (sum + x - 1) / x;
        cout << minb << " " << maxb << endl;
    }
}