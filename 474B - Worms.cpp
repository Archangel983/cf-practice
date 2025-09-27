#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + a[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(pref.begin(), pref.end(), x);
        cout << distance(pref.begin(), it) << "\n";
    }
}