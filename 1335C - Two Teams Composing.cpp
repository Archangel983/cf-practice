#include <bits/stdc++.h>
using namespace std;
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
        vector<int> a(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        int distinct = freq.size();
        int freq_max = 0;
        for (auto &p : freq)
        {
            freq_max = max(freq_max, p.second);
        }
        int ans = max(min(distinct, freq_max - 1), min(distinct - 1, freq_max));
        cout << ans << "\n";
    }
    return 0;
}
