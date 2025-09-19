#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        int p = find(a.begin(), a.end(), x) - a.begin();
        cout << p + 1 << " ";
        rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
    }
    cout << "\n";
}