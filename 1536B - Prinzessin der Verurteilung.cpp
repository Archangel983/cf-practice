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
        string s;
        cin >> n >> s;
        string ans = "";
        set<string> seen;
        for (int len = 1; len <= 3; len++)
        {
            for (int i = 0; i + len <= n; i++)
            {
                seen.insert(s.substr(i, len));
            }
        }
        for (char c = 'a'; c <= 'z'; c++)
        {
            string t(1, c);
            if (!seen.count(t))
            {
                ans = t;
                break;
            }
        }
        if (ans == "")
        {
            bool ok = true;
            for (char c1 = 'a'; c1 <= 'z'; c1++)
            {
                for (char c2 = 'a'; c2 <= 'z'; c2++)
                {
                    string t;
                    t.push_back(c1);
                    t.push_back(c2);
                    if (!seen.count(t))
                    {
                        ans = t;
                        ok = false;
                        break;
                    }
                }
                if (!ok)
                    break;
            }
        }
        if (ans == "")
        {
            bool ok = true;
            for (char c1 = 'a'; c1 <= 'z'; c1++)
            {
                for (char c2 = 'a'; c2 <= 'z'; c2++)
                {
                    for (char c3 = 'a'; c3 <= 'z'; c3++)
                    {
                        string t;
                        t.push_back(c1);
                        t.push_back(c2);
                        t.push_back(c3);
                        if (!seen.count(t))
                        {
                            ans = t;
                            ok = false;
                            break;
                        }
                    }
                    if (!ok)
                        break;
                }
                if (!ok)
                    break;
            }
        }
        cout << ans << "\n";
    }
}