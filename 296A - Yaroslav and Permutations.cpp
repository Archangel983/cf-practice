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
    int ans = 1, temp = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            temp++;
        }
        else
        {
            ans = max(temp, ans);
            temp = 1;
        }
    }
    ans = max(temp, ans);
    cout << (ans <= (n + 1) / 2 ? "YES" : "NO") << "\n";
}