#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ones = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
        if (x == 1)
            ones++;
    }
    int best = INT_MIN, curr = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        if (a[i] == 0)
        {
            val = 1;
        }
        else
            val = -1;
        curr = max(val, curr + val);
        best = max(curr, best);
    }
    if (ones == n)
        cout << n - 1 << "\n";
    else
        cout << ones + best << "\n";
}