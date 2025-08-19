#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int ans = 0;
        while (n >= 10)
        {
            long long int spend = (n / 10) * 10;
            n -= spend;
            n += spend / 10;
            ans += spend;
        }
        ans += n;
        cout << ans << endl;
    }
}