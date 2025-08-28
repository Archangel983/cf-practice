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
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
        }

        if (n == 3)
        {
            if (v[1] % 2 == 0 && v[1] >= max(v[0], v[2]))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
            continue;
        }

        bool allzero = true, ok = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
                allzero = false;
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] >= 2)
            {
                ok = true;
                break;
            }
        }

        if (allzero)
        {
            cout << "YES" << endl;
        }
        else if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
