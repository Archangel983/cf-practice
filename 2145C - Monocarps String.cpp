#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
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
        string s;
        cin >> s;
        int diff = count(s.begin(), s.end(), 'a') - count(s.begin(), s.end(), 'b');
        map<int, int> last;
        int pref = 0;
        last[pref] = -1;
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                pref += 1;
            else
                pref -= 1;
            last[pref] = i;
            if (last.count(pref - diff))
            {
                ans = min(ans, i - last[pref - diff]);
            }
        }
        cout << (ans == n ? -1 : ans) << "\n";
    }
}