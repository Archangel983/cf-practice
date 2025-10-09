#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += abs(i + 1 - a[i]);
    }
    cout << cnt << "\n";
}