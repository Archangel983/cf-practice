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
    for (auto &x : a)
        cin >> x;
    vector<int> b = a;
    sort(b.begin(), b.end());
    vector<ll> prefa(n + 1, 0), prefb(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        prefa[i + 1] = prefa[i] + a[i];
        prefb[i + 1] = prefb[i] + b[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << prefa[r] - prefa[l-1] << "\n";
        }
        else
            cout << prefb[r] - prefb[l-1] << "\n";
    }
}