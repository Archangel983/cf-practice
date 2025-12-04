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
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        int maxlen = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }
        for (auto x : freq)
        {
            maxlen = max(maxlen, x.second);
        }
        if (maxlen <= n - maxlen)
        {
            if (n % 2 == 0)
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
        }
        else
        {
            cout << n - 2 * (n - maxlen) << "\n";
        }
    }
}