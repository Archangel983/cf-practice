#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<ll> bin;
    queue<ll> q;
    q.push(1);
    ll limit = 100000;
    while (!q.empty())
    {
        ll num = q.front();
        q.pop();
        if (num > limit)
            continue;
        bin.push_back(num);
        q.push(num * 10);
        q.push(num * 10 + 1);
    }
    sort(bin.begin(), bin.end(), greater<ll>());
    while (t--)
    {
        int n;
        cin >> n;
        for (ll b : bin)
        {
            if (b == 1)
                continue;
            if (b > n)
                continue;
            while (n % b == 0)
                n /= b;
            if (n == 1)
                break;
        }
        if (n == 1)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}