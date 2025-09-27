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
    int m;
    cin >> m;
    vector<int> b(m);
    for (auto &y : b)
        cin >> y;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ops = 0, i = 0, j = 0;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= 1)
        {
            ops++;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << ops << "\n";
}