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
        ll sum = 0;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if ((2 * sum) % n != 0)
        {
            cout << 0 << "\n";
            continue;
        }
        ll target = (2 * sum) / n;
        ll pairs = 0;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            pairs += freq[target - a[i]];
            freq[a[i]]++;
        }
        cout << pairs << "\n";
    }
}