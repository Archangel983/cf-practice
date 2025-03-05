#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cur = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cur++;

            if (cur == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            cur = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}