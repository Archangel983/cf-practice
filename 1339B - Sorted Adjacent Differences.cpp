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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int mid = n / 2;
        int l = mid - 1, r = mid + 1;
        vector<ll> ans;
        bool turnl = true;
        ans.push_back(a[mid]);
        while (l >= 0 || r < n)
        {
            if (turnl && l >= 0)
            {
                ans.push_back(a[l]);
                l--;
            }
            else if (!turnl && r < n)
            {
                ans.push_back(a[r]);
                r++;
            }
            turnl = !turnl;
        }
        for (auto &x : ans)
            cout << x << " ";
        cout << "\n";
    }
}