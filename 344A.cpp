#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, arr[100000], count = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
}