#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;
    c = min(a, b);
    a -= c;
    b -= c;
    cout << c << " ";
    if (a == 0)
    {
        cout << b / 2;
    }
    else if (b == 0)
    {
        cout << a / 2;
    }
    return 0;
}