#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = 0;
        a += int((s[0] - 48) + (s[1] - 48));
        cout << a << endl;
    }
}