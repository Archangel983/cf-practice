#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> k;
    int found = 0;
    ll num = 19;
    while (true)
    {
        ll x = num;
        int sum = 0;
        while (x > 0)
        {
            sum += x % 10;
            x /= 10;
        }
        if (sum == 10)
        {
            found++;
        }
        if (found == k)
        {
            cout << num << "\n";
            break;
        }
        num++;
    }
}