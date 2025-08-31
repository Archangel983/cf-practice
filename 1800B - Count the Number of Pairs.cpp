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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> lower(26, 0), upper(26, 0);
        for (char ch : s)
        {
            if (isupper(ch))
            {
                upper[ch - 'A']++;
            }
            else if (islower(ch))
            {
                lower[ch - 'a']++;
            }
        }
        ll pair = 0, extra = 0;
        for (int i = 0; i < 26; i++)
        {
            ll rem = 0;
            pair += min(lower[i], upper[i]);
            rem += abs(lower[i] - upper[i]);
            extra += rem / 2;
        }
        cout << pair + min(extra, k) << endl;
    }
    return 0;
}