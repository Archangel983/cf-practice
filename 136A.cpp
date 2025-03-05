#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        arr[k] = i;
    }
    cout << arr[1];
    for (int i = 2; i <= n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}