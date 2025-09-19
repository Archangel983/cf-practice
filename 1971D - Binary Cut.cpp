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
        int seg = 1;
        int ex = 0;
        for (int i = 0; i+1 < s.size(); i++)
        {
            if (s[i] != s[i + 1])
                seg++;
            if (s[i] == '0' && s[i + 1] == '1')
                ex = 1;
        }
        cout << seg - ex << "\n";
    }
}