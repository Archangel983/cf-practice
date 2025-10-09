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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l = 0, r = 1, cnt = 1;
    while (l <= r && r < n)
    {
        if (a[r] - a[l] <= 5)
        {
            r++;
            cnt = max(cnt, r - l);
        }
        else
            l++;
    }
    cout << cnt << "\n";
}