#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int d;
    cin >> d;
    vector<ll> a(d);
    for (auto &x : a)
        cin >> x;
    ll l = 0, r = d - 1, suml = 0, sumr = 0, ans = 0;
    while (l <= r)
    {
        if (suml <= sumr)
        {
            suml += a[l++];
        }
        else
        {
            sumr += a[r--];
        }
        if (suml == sumr)
            ans = suml;
    }

    cout << ans << '\n';
}