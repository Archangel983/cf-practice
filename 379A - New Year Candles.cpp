#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    long long int hours = 0, temp = 0;
    while (a > 0)
    {
        hours += a;
        temp+=a;
        a = (temp / b);
        temp%=b;

    }
    cout << hours << endl;
}