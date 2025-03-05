#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, width = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > h)
        {
            width += 2;
        }
        else if (arr[i] <= h)
        {
            width += 1;
        }
    }
    cout << width << endl;
}