#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = accumulate(arr, arr + n, 0);
    sort(arr, arr + n, greater<int>());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans > sum - ans)
        {
            cout << i << endl;
            return 0;
        }
        else
        {
            ans += arr[i];
        }
    }
    cout << n << endl;
    return 0;
}