#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<int> freq(26, 0);
        for (char c : s)
        {
            freq[c - 'a']++;
        }
        int suffix = 0;
        for (int i : freq)
        {
            if (i > 0)
            {
                suffix++;
            }
        }
        vector<bool> seen(26, false);
        int prefix = 0, sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int c = s[i] - 'a';
            if (!seen[c])
            {
                seen[c] = true;
                prefix++;
            }
            freq[c]--;
            if (freq[c] == 0)
            {
                suffix--;
            }
            sum = max(sum, suffix + prefix);
        }
        cout << sum << endl;
    }
}