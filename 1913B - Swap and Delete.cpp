#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int cnt0 = 0, cnt1 = 0;
        cin >> s;
        for (char c : s)
        {
            if (c == '0')
            {
                cnt0++;
            }
            else
                cnt1++;
        }
        int k = 0;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (cnt1 > 0)
                {
                    cnt1--;
                    k++;
                }
                else
                    break;
            }
            if (s[i] == '1')
            {
                if (cnt0 > 0)
                {
                    cnt0--;
                    k++;
                }
                else
                    break;
            }
        }
        cout << s.size() - k << endl;
    }
}