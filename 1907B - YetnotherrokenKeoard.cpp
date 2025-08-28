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
        string res;
        vector<int> lower, upper;
        for (char c : s)
        {
            if (c == 'b')
            {
                if (!lower.empty())
                {
                    res[lower.back()] = '#';
                    lower.pop_back();
                }
            }
            else if (c == 'B')
            {
                if (!upper.empty())
                {
                    res[upper.back()] = '#';
                    upper.pop_back();
                }
            }
            else
            {
                res.push_back(c);
                if (islower(c))
                    lower.push_back(res.size() - 1);
                else
                    upper.push_back(res.size() - 1);
            }
        }
        string ans;
        for (char c : res)
        {
            if (c != '#')
                ans.push_back(c);
        }
        cout << ans << endl;
    }
    return 0;
}
