#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;
        int j = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                j = i;
            }
        }
        if (j == 0)
        {
            cout << "YES" << "\n";
            continue;
        }
        for (int i = 0; i < j; i++)
        {
            int temp = min(a[i], a[i + 1]);
            a[i] -= temp;
            a[i + 1] -= temp;
        }
        cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << "\n";
    }
}