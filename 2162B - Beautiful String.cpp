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
        bool zero = false, one = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero = true;
            else
                one = true;
        }
        string c = s;
        reverse(c.begin(), c.end());
        if (s == c)
        {
            cout << 0 << "\n"
                 << " " << "\n";
            continue;
        }
        if (zero && one)
        {
            int z = count(s.begin(), s.end(), '0');
            cout << z << "\n";
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    cout << i + 1 << " ";
                }
            }
            cout << "\n";
            continue;
        }
        else if (zero && !one)
        {
            cout << 0 << "\n"
                 << " " << "\n";
        }
        else if (one && !zero)
            cout << 0 << "\n"
                 << " " << "\n";
    }
}