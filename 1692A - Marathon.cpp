#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, d,count=0;
        cin >> a >> b >> c >> d;
        if (b > a)
            count++;
        if (c > a)
            count++;
        if (d > a)
            count++;
        cout << count << endl;
    }
}