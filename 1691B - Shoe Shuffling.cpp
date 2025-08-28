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
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        vector<int> p(n);
        bool possible = true;
        int i = 0;
        while (i < n)
        {
            int j = i;
            while (j < n && v[j] == v[i])
                j++;
            int len = j - i;
            if (len == 1)
            {
                possible = false;
                break;
            }
            for (int k = 0; k < len; k++)
            {
                p[i + k] = i + (k + 1) % len + 1;
            }
            i = j;
        }
        if (!possible)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int k = 0; k < n; k++)
            {
                cout << p[k] << " ";
            }
            cout << endl;
        }
    }
}