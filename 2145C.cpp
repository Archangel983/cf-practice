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
        int cnta = 0, cntb = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                cnta++;
            else
                cntb++;
        }
        if (cntb == cnta)
        {
            cout << 0 << "\n";
            continue;
        }
        if (cnta == 0 || cntb == 0)
        {
            cout << -1 << "\n";
            continue;
        }
        int best = -1, l = 0, tempa = 0, tempb = 0;
        if (s[l] == 'a')
            tempa++;
        else
            tempb++;
        if ((cnta - tempa) == (cntb - tempb))
        {
            cout << 1 << "\n";
            continue;
        }
        for (int r = 1; r < n; r++)
        {
            if (s[r] == 'a')
                tempa++;
            else
                tempb++;

            if ((cnta - tempa) == (cntb - tempb))
            {
                best = r - l + 1;
            }
        }
        cout << best << "\n";
    }
}