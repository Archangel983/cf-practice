#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    string s1 = s;
    for (int i = 0; i < n; i++)
    {
        if (i)
        {
            if (9 - (s[i] - '0') >= 0 && (9 - (s[i] - '0')) < s[i] - '0')
            {
                s[i] = (9 - (s[i] - '0')) + '0';
            }
        }
        else
        {
            if (9 - (s[i] - '0') > 0 && (9 - (s[i] - '0')) < s[i] - '0')
            {
                s[i] = (9 - (s[i] - '0')) + '0';
            }
        }
       
    }
     if (s < s1)
        {
            cout << s << endl;
        }
        else
            cout << s1 << endl;
}