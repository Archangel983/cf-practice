#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1, temp = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i-1])
        {
            count++;
            if (count >= temp)
            {
                temp = count;
            }
        }
        else if (arr[i] < arr[i-1])
        {
            count = 1;
        }
    }
    cout << temp << endl;
}