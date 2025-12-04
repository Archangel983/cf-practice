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
    sort(a.begin(), a.end());
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            cout << i + 1 << "\n";
            ok = true;
            break;
        }
    }
    if (!ok)
    {
        cout << n + 1 << "\n";
    }
}