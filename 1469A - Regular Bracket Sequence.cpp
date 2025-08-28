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
        if (s.size() % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (s[0] == ')')
        {
            cout << "NO" << endl;
        }
        else if (s[s.size() - 1] == '(')
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}