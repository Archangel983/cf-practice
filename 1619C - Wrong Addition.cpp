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
        string a, s;
        cin >> a >> s;
        string b = "";
        bool ok = true;
        int i = a.size() - 1;
        int j = s.size() - 1;
        while (i >= 0 && j >= 0)
        {
            if (s[j] >= a[i])
            {
                b.push_back('0' + ((s[j] - '0') - (a[i] - '0')));
                i--;
                j--;
            }
            else
            {
                if (j == 0)
                {
                    ok = false;
                    break;
                }
                int y = (s[j - 1] - '0') * 10 + (s[j] - '0');
                if (y - (a[i] - '0') >= 0 && y - (a[i] - '0') <= 9)
                {
                    b.push_back('0' + (y - (a[i] - '0')));
                    i--;
                    j -= 2;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        while (j >= 0)
            b.push_back(s[j--]);
        if (i >= 0)
            ok = false;
        if (!ok)
            cout << -1 << "\n";
        if (ok)
        {
            while (b.size() > 1 && b.back() == '0')
            {
                b.pop_back();
            }
            reverse(b.begin(), b.end());
            cout << b << "\n";
        }
    }
}