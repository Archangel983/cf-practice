#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string res;
        for (int i = 0; i < n;)
        {
            if (i + 2 < n && s[i + 2] != 'a' && s[i + 2] != 'e')
            {
                if (i + 3 < n && (s[i + 3] == 'a' || s[i + 3] == 'e'))
                {
                    res += s.substr(i, 2);
                    i += 2;
                }
                else
                {
                    res += s.substr(i, 3);
                    i += 3;
                }
            }
            else
            {

                res += s.substr(i, 2);
                i += 2;
            }
            if (i < n)
                res += '.';
        }
        cout << res << '\n';
    }
    return 0;
}
