#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, tram = 0, a, b, temp, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        tram -= a;
        tram += b;
        temp = tram;
        if (temp >= max)
        {
            max = temp;
        }
    }
    cout << max << endl;
}