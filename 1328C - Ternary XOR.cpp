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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a, b;
        bool split = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                a.push_back('0');
                b.push_back('0');
            }
            else if (s[i] == '1')
            {
                if (!split)
                {
                    a.push_back('1');
                    b.push_back('0');
                    split = true;
                }
                else
                {
                    a.push_back('0');
                    b.push_back('1');
                }
            }
            else if (s[i] == '2')
            {
                if (!split)
                {
                    a.push_back('1');
                    b.push_back('1');
                }
                else
                {
                    a.push_back('0');
                    b.push_back('2');
                }
            }
        }
        cout << a << "\n"
             << b << "\n";
    }
}