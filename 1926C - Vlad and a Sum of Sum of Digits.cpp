#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll MAX = 200007;
int res[MAX];
int s(int x)
{
    int res = 0;
    while (x)
    {
        res += x % 10;
        x /= 10;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    res[0] = 0;
    for (int i = 1; i < MAX; i++)
    {
        res[i] = res[i - 1] + s(i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << res[n] << "\n";
    }
}