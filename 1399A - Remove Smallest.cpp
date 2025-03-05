#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<long long int>());
        bool istrue = true;
        for (long long int i = 0; i < n-1; i++)
        {
            if ((a[i] - a[i + 1]) > 1)
            {
                istrue = false;
                break;
            }
        }
        if (istrue)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}