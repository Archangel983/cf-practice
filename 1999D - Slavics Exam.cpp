#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int j = 0;
        bool ok = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == t[j] || s[i] == '?')
            {
                if (s[i] == '?')
                {
                    s[i] = t[j];
                }
                j++;
            }
            if (j >= t.size())
                break;
        }
        for (char &c : s)
        {
            if (c == '?')
                c = 'a';
        }
        if (j == t.size())
        {
            cout << "YES" << "\n";
            cout << s << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}