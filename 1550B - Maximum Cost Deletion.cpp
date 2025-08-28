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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        if (b >= 0)
        {
            cout << (n * a) + (n * b) << endl;
            continue;
        }
        int grp0 = 0, grp1 = 0;
        char prev = s[0];
        if (prev == '0')
            grp0++;
        else
            grp1++;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != prev)
            {
                if (s[i] == '0')
                {
                    grp0++;
                }
                else
                    grp1++;
            }
            prev = s[i];
        }
        int mingrp = min(grp0, grp1);
        ll sum = (mingrp * b) + b;
        cout << sum + (n * a) << endl;
    }
    return 0;
}