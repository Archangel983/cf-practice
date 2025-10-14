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
        {
            cin >> a[i];
        }
        ll min1 = *min_element(a.begin() + 1, a.end());
        if (a[0] <= min1)
            cout << "Bob" << "\n";
        else
            cout << "Alice\n";
    }
}