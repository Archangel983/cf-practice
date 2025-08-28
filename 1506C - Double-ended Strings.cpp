#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int best = 0;
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                int len = 0;
                while (i + len < a.size() && j + len < b.size() && a[i + len] == b[j + len])
                {
                    len++;
                }
                best = max(best, len);
            }
        }
        cout << a.size() + b.size() - 2 * best << endl;
    }
}