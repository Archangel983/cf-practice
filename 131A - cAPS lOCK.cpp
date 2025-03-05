#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
        {
            count++;
        }
    }
    if (s.length() == 1 && s[0] >= 97)
    {
        cout << char(s[0] - 32) << endl;
        return 0;
    }
    else if (count == s.length() || (s[0] >= 97 && count == (s.length() - 1)))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97)
            {
                s[i] -= 32;
            }
            else if (s[i] < 97)
            {
                s[i] += 32;
            }
        }
        cout << s << endl;
        return 0;
    }
    cout << s << endl;
    return 0;
}
