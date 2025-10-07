#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    vector<ll> gaps;
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i + 1] - a[i]) > x)
        {
            ll need = (a[i + 1] - a[i] - 1) / x;
            gaps.push_back(need);
        }
    }
    ll groups = gaps.size() + 1;
    sort(gaps.begin(), gaps.end());
    for (ll g : gaps)
    {
        if (k >= g)
        {
            k -= g;
            groups--;
        }
        else
            break;
    }
    cout << groups << "\n";
}