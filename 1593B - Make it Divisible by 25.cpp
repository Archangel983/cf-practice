#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ans = n;
        vector<string> endings = {"00", "25", "50", "75"};
        for (auto &end : endings)
        {
            int count = 0, found = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (!found)
                {
                    if (s[i] == end[1])
                        found = 1;
                    count++;
                }
                else
                {
                    if (s[i] == end[0])
                    {
                        ans = min(ans, count - 1);
                        break;
                    }
                    count++;
                }
            }
        }

        cout << ans << endl;
    }
}