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
        string a;
        cin >> a;
        int m;
        cin >> m;
        string b;
        cin >> b;
        string order;
        cin >> order;
        for (int i = 0; i < order.size(); i++)
        {
            if (order[i] == 'D')
            {
                a += b[i];
            }
            else
                a.insert(0, 1, b[i]);
        }
        cout << a << endl;
    }
}