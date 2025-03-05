#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        int arr[6];
        int total = 0, m = 1;
        for (int i = 1; i < 6; i++)
        {
            arr[i] = t % 10;
            t /= 10;
            if (arr[i] != 0)
            {
                total++;
            }
        }
        cout << total << endl;
        for (int i = 1; i < 6; i++)
        {
            if (arr[i] != 0)
                cout << arr[i] * m << " ";
            m *= 10;
        }
        cout << endl;
    }
}