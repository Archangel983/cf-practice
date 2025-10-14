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
        int cnt2 = 0, cnt3 = 0;
        ll sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '2')
            {
                cnt2++;
            }
            else if (s[i] == '3')
            {
                cnt3++;
            }
            sum += (s[i] - '0');
        }
        cnt2 = min(8, cnt2);
        cnt3 = min(8, cnt3);
        bool ok = false;
        for (int i = 0; i <= cnt2; i++)
        {
            for (int j = 0; j <= cnt3; j++)
            {
                if ((sum + (2 * i + 6 * j)) % 9 == 0)
                {
                    ok = true;
                    break;
                }
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}