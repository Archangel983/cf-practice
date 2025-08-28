#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int s = 0; s < 2 * (n - i); s++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            if (k > 0)
                cout << " ";
            cout << k;
        }
        for (int k = i - 1; k >= 0; k--)
        {
            cout << " " << k;
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int s = 0; s < 2 * (n - i); s++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            if (k > 0)
            {
                cout << " ";
            }
            cout << k;
        }
        for (int k = i - 1; k >= 0; k--)
        {
            cout << " " << k;
        }
        cout << endl;
    }
}