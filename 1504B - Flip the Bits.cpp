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
        string a, b;
        cin >> a >> b;
        vector<int> cnt1(n), cnt0(n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
            {
                cnt0[i]++;
            }
            else
                cnt1[i]++;
            if (i > 0)
            {
                cnt0[i] += cnt0[i - 1];
                cnt1[i] += cnt1[i - 1];
            }
        }
        bool ok = true, flip = false;
        for (int i = n - 1; i >= 0; i--)
        {
            char cur = a[i];
            if (flip)
            {
                if (cur == '0')
                {
                    cur = '1';
                }
                else
                    cur = '0';
            }
            if (cur == b[i])
                continue;
            if (cnt0[i] != cnt1[i])
            {
                ok = false;
                break;
            }
            flip = !flip;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}