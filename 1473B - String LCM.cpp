#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size(), m = s2.size();
        long long int len = lcm(n, m);
        string S = "", T = "";
        for (int i = 0; i < len / n; i++)
        {
            S += s1;
        }
        for (int i = 0; i < len / m; i++)
        {
            T += s2;
        }
        if (S == T)
        {
            cout << S << endl;
        }
        else
            cout << -1 << endl;
    }
}