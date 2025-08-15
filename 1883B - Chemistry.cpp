#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> m;
        for (char c : s)
            ++m[c];

        int odd_count = 0;
        for (auto i : m)
        {
            if (i.second % 2 == 1)
                ++odd_count;
        }

        --odd_count;

        if (odd_count <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
