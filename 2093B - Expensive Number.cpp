#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int zero = 0;
    bool ok = false;
    int index;
    for (int i = n-1; i >= 0; i--)
    {   
        if (s[i] != '0')
            ok = true;
        index = i;
        if (ok)
        {
            if (s[i] == '0')
                zero++;
        }
    }
    cout << (n - index - 1) + (index - zero) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}