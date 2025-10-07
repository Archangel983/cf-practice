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
        int n = s.size();
        vector<int> cnt(4, 0);
        int l = 0, ans = n + 1;
        for (int r = 0; r < n; r++)
        {
            cnt[s[r] - '0']++;
            while (cnt[1] > 0 && cnt[2] > 0 && cnt[3] > 0)
            {
                ans = min(ans, r - l + 1);
                cnt[s[l] - '0']--;
                l++;
            }
        }
        if (ans == n + 1)
            cout << 0 << "\n";
        else
            cout << ans << "\n";
    }
}