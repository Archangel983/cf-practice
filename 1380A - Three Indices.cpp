#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, j, k;
        cin >> n;
        bool flag = false;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n - 2; i++)
        {
            if (v[i] < v[i + 1] && v[i + 1] > v[i + 2])
            {
                h = i + 1;
                j = i + 2;
                k = i + 3;
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl
                 << h << " " << j << " " << k << endl;
        }
        else
            cout << "NO" << endl;
    }
}