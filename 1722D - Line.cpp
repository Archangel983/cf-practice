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
        vector<ll> gains;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sum += i;
                ll newval = (n - i - 1);
                if (newval > i)
                {
                    gains.push_back(newval - i);
                }
            }
            else
            {
                sum += (n - i - 1);
                ll newval = i;
                if (newval > (n - i - 1))
                {
                    gains.push_back(newval - (n - i - 1));
                }
            }
        }
        sort(gains.rbegin(), gains.rend());
        vector<ll> pref(gains.size() + 1, 0);
        for (int i = 0; i < gains.size(); i++)
        {
            pref[i + 1] = pref[i] + gains[i];
        }
        for (int k = 1; k <= n; k++)
        {
            ll ans = sum + pref[min(k, (int)gains.size())];
            cout << ans << " ";
        }
        cout << "\n";
    }
}