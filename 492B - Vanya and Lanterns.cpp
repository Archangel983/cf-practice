#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, l;
    cin >> n >> l;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    double d = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        d = max(d, ((a[i + 1] - a[i]) / 2));
    }
    double left = a[0] - 0;
    double r = l - a[n - 1];
    cout << fixed << setprecision(10) << max({d, left, r}) << "\n";
}