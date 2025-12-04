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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;

        for (char c : s)
        {
            if (c == '0')
                a--;
            else if (c == '1')
                b--;
        }
        if (a < 0 || b < 0)
        {
            cout << -1 << "\n";
            continue;
        }

        bool bad = false;
        int n = (int)s.size();

        for (int i = 0; i < n / 2; ++i)
        {
            int k = n - 1 - i;
            if (s[i] != '?' && s[k] != '?' && s[i] != s[k])
            {
                bad = true;
                break;
            }
            if (s[i] == '?' && s[k] != '?')
            {
                s[i] = s[k];
                if (s[i] == '0')
                    --a;
                else
                    --b;
            }
            else if (s[k] == '?' && s[i] != '?')
            {
                s[k] = s[i];
                if (s[k] == '0')
                    --a;
                else
                    --b;
            }
            if (a < 0 || b < 0)
            {
                bad = true;
                break;
            }
        }
        if (bad)
        {
            cout << -1 << "\n";
            continue;
        }

        if (n % 2 == 1 && s[n / 2] == '?')
        {
            if (a % 2 == 1)
            {
                s[n / 2] = '0';
                --a;
            }
            else if (b % 2 == 1)
            {
                s[n / 2] = '1';
                --b;
            }
        }
        if (a < 0 || b < 0)
        {
            cout << -1 << "\n";
            continue;
        }

        for (int i = 0; i < n / 2; ++i)
        {
            int k = n - 1 - i;
            if (s[i] == '?' && s[k] == '?')
            {
                if (a >= 2)
                {
                    s[i] = s[k] = '0';
                    a -= 2;
                }
                else if (b >= 2)
                {
                    s[i] = s[k] = '1';
                    b -= 2;
                }
                else
                {
                    bad = true;
                    break;
                }
            }
            if (a < 0 || b < 0)
            {
                bad = true;
                break;
            }
        }
        if (bad)
        {
            cout << -1 << "\n";
            continue;
        }

        if (n % 2 == 1 && s[n / 2] == '?')
        {
            if (a > 0)
            {
                s[n / 2] = '0';
                --a;
            }
            else if (b > 0)
            {
                s[n / 2] = '1';
                --b;
            }
            else
            {
                bad = true;
            }
        }
        if (bad)
        {
            cout << -1 << "\n";
            continue;
        }

        string t2 = s;
        reverse(t2.begin(), t2.end());
        if (a != 0 || b != 0 || s.find('?') != string::npos || s != t2)
            cout << -1 << "\n";
        else
            cout << s << "\n";
    }
}
