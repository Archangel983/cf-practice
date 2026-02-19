#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
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
        ll a = -1, b = -1, c = -1;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = i;
                n /= i;
                break;
            }
        }
        if (a == -1)
        {
            cout << "NO\n";
            continue;
        }
        for (ll i = a + 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                b = i;
                n /= i;
                break;
            }
        }
        if (b == -1 || n == a || n == b || n == 1)
        {
            cout << "NO\n";
        }
        else{
            c=n;
            cout<<"YES\n"<<a<<" "<<b<<" "<<c<<"\n";
        }
    }
}