#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            temp++;
        }
    }
    if (temp == 0)
    {
        cout << "EASY" << endl;
        return 0;
    }
    cout << "HARD" << endl;
    return 0;
}