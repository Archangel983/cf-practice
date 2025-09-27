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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        vector<int> freq(n + 1, 0);
        for (int x : a)
            if (0 <= x && x <= n)
                freq[x]++;
        int missing = 0;
        for (int v = 0; v < k; ++v)
        {
            if (freq[v] == 0)
                ++missing;
        }
        if (k == n)
        {
            cout << missing << "\n";
        }
        else
        {
            int cntk = freq[k];
            cout << max(missing, cntk) << "\n";
        }
    }
}
