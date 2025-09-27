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
        bool uniform = true;
        for (char c : s)
        {
            if (c != s[0])
            {
                uniform = false;
                break;
            }
        }
        if (uniform)
        {
            cout << s << "\n";
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout << "01";
        }
        cout << "\n";
    }
}