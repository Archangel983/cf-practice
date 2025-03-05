#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, temp = 0;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            count++;
        }
        else if (arr[i] % 2 != 0)
        {
            temp++;
        }
    }
    if (temp > count)
    {
        for (int i = 1; i <= n; i++)
        {
            arr[i] = arr[i] % 2;
            if (arr[i] == 0)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    else if (count > temp)
    {
        for (int i = 1; i <= n; i++)
        {
            arr[i] = arr[i] % 2;
            if (arr[i] > 0)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
}