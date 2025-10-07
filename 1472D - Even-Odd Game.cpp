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
        sort(a.rbegin(), a.rend());
        ll alice = 0, bob = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 0)
                    alice += a[i];
            }
            else
            {
                if (a[i] % 2 == 1)
                    bob += a[i];
            }
        }
        if (alice > bob)
            cout << "Alice\n";
        else if (bob > alice)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }
}
