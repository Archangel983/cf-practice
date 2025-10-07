#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll i = 0, sum = 0;
        while (i < n)
        {
            if (a[i] > 0)
            {
                int tempmax = INT_MIN;
                while (i < n && a[i] > 0)
                {
                    tempmax = max(a[i], tempmax);
                    i++;
                }
                sum += tempmax;
            }
            else
            {
                int tempmin = INT_MIN;
                while (i < n && a[i] < 0)
                {
                    tempmin = max(a[i], tempmin);
                    i++;
                }
                sum += tempmin;
            }
        }
        cout << sum << "\n";
    }
}