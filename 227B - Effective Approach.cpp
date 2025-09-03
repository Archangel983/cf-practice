#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> a(n + 1), pos(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int m;
    cin >> m;
    ll vasya = 0, petya = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        vasya += pos[x];
        petya += (n - pos[x] + 1);
    }
    cout << vasya << " " << petya << "\n";
}