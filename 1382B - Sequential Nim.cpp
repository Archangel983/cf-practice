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
        int ones = 0;
        while (ones < n && a[ones] == 1)
            ones++;
        if (ones == n)
        {
            if (ones % 2 == 0)
                cout << "Second\n";
            else
                cout << "First\n";
        }
        else
        {
            if (ones % 2 == 0)
                cout << "First\n";
            else
                cout << "Second\n";
        }
    }
}