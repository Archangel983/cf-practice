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
        ll x, y;
        cin >> x >> y;
        if((x+y)%3==0 && (y>=(-x)/4) && y<=(x/2)){
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
}