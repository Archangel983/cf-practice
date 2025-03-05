#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int max = 0, min = 110;
    int maxi = 0, mini = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a > max)
        {
            maxi = i;
            max = a;
        }
        if (a <= min)
        {
            mini = i;
            min = a;
        }
    }
    if (maxi > mini)
    {
        cout << ((maxi - 1) + (n - mini) - 1)<<endl;
    }
    else
    {
        cout << (maxi - 1) + (n - mini)<<endl;
    }
    return 0;
}