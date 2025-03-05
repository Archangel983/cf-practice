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
        if (s[0] == 'c' || s[0] == 'o' || s[0] == 'd' || s[0] == 'e' || s[0] == 'f' || s[0] == 'r' || s[0] == 's')
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}