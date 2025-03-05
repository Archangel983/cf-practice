#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a = 0, b = 0, c = 0, d = 0, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
            a++;
        if (t == 2)
            b++;
        if (t == 3)
            c++;
        if (t == 4)
            d++;
    }
    count += d;
    if (c < a)
    {
        count += c;
        a = a - c;
        c = 0;
    }
    else if (a <= c)
    {
        count += a;
        c = c - a;
        a = 0;
    }
    if (c > 0)
    {
        count += c;
    }
    if (b > 0)
    {
        count += b / 2;
        b = b % 2;
    }
    int left = a + (b * 2);
    if (left <= 4 && left > 0)
    {
        count++;
    }
    else if (left % 4 != 0)
    {
        count += (left / 4) + 1;
    }
    else
    {
        count += left / 4;
    }
    cout << count << endl;
}