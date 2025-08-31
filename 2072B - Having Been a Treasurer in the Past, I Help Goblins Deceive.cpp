#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a=0, b=0;
        cin >> n;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == '-')
            {
                a++;
            }
            else if (arr[i] == '_')
            {
                b++;
            }
        }
        long long c=b * (a / 2) * ((a + 1) / 2);
        cout << c << endl;
    }
}

