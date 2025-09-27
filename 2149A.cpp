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
        vector<int> a(n);
        int zero = 0, neg = 0;
        for (auto &x : a)
        {
            cin >> x;
            if (x == 0)
                zero++;
            if (x < 0)
            {
                neg++;
            }
        }
        int total = zero;
        if (neg % 2 == 0)
        {
            cout << total << "\n";
        }
        else if (neg % 2 != 0 && neg > 0)
            cout << total + 2 << "\n";
    }
}