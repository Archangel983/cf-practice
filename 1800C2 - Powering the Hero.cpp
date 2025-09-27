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
        priority_queue<ll> a;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == 0)
            {
                if (!a.empty())
                {
                    ans += a.top();
                    a.pop();
                }
            }
            else
            {
                a.push(x);
            }
        }
        cout<<ans<<"\n";
    }
}