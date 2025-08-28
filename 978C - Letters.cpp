#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n + 1);
    vector<ll> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        prefix[i] = prefix[i - 1] + v[i];
    }
    int dorm = 1;
    for (int j = 0; j < m; j++)
    {
        ll b;
        cin >> b;
        while (b > prefix[dorm])
            dorm++;
        cout << dorm << " " << b - prefix[dorm - 1] << endl;
    }
}