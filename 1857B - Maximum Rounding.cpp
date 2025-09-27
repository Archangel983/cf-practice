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
        string s;
        cin >> s;
        s = '0' + s;
        int p = s.size();
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] >= '5')
            {
                s[i - 1]++;
                p = i;
            }
        }
        if (s[0] == '0')
        {
            for (int i = 1; i < s.size(); i++)
                cout << (i >= p ? '0' : s[i]);
            cout << "\n";
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
                cout << (i >= p ? '0' : s[i]);
            cout << "\n";
        }
    }
}
