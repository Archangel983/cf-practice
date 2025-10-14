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
        vector<string> a(n);
        string res;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unordered_set<string> st(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            bool ok = false;
            int m = a[i].size();
            for (int j = 1; j < m; j++)
            {
                string left = a[i].substr(0, j);
                string right = a[i].substr(j);
                if (st.count(left) && st.count(right))
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
                res.push_back('1');
            else
                res.push_back('0');
        }
        cout << res << "\n";
    }
}