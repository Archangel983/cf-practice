#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 998244353;
const int N = 1e5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> s(N);
    s[0] = 1;
    for (int i = 1; i < N; i++)
    {
        s[i] = (1LL * s[i - 1] * 2) % mod;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        int i = 0, j = 0;
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;
        for (int k = 0; k < n; k++)
        {
            if (a[k] > a[i])
                i = k;
            if (b[k] > b[j])
                j = k;
            if (a[i] != b[j])
            {
                if (a[i] > b[j])
                    cout << (s[a[i]] + s[b[k - i]]) % mod << " ";
                else
                    cout << (s[b[j]] + s[a[k - j]]) % mod << " ";
            }
            else
            {
                cout << (s[a[i]] + s[max(b[k - i], a[k - j])]) % mod << " ";
            }
        }
        cout << "\n";
    }
}