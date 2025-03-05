#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = 0; i < 10; i++)
    {
        if (a > b)
        {
            cout << count << endl;
            break;
        }
        a = a * 3;
        b = b * 2;
        count++;
    }
}