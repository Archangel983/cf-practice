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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int m;
        cin >> m;
        while (m--)
        {
            map<ll, char> numtochar;
            map<char, ll> chartonum;
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }
            bool res = true;
            for (ll p = 0; res && p < s.size(); p++)
            {
                ll f = v[p];
                char g = s[p];
                if (numtochar.count(f) ^ chartonum.count(g))
                    res = false;
                if (!numtochar.count(f))
                {
                    numtochar[f] = g;
                    chartonum[g] = f;
                }
                else if (numtochar[f] != g || chartonum[g] != f)
                {
                    res = false;
                }
            }
            cout << (res ? "YES" : "NO") << endl;
        }
    }
}