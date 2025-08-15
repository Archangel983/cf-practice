#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            a.push_back(val);
        }
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            b.push_back(val);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((a[i] + b[j]) % k == 0)
                {
                    a[i] = b[j];
                }
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}