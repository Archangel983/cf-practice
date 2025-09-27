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
        vector<int> pos;
        ll cost = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                pos.push_back(i);
            }
            else if (s[i] == ')')
            {
                int op = pos.back();
                pos.pop_back();
                cost += (i - op);
            }
            else
            {
                if (pos.empty())
                {
                    pos.push_back(i);
                }
                else
                {
                    int op = pos.back();
                    pos.pop_back();
                    cost += (i - op);
                }
            }
        }
        cout << cost << "\n";
    }
}