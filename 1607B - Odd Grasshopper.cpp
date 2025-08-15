#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, n;
        cin >> x >> n;
        long long int ans = x;
        if (x % 2 == 0)
        {
            if (n % 4 == 1)
                ans -= n;
            else if (n % 4 == 2)
                ans += 1;
            else if (n % 4 == 3)
                ans += n + 1;
        }
        else
        {
            if (n % 4 == 1)
                ans += n;
            else if (n % 4 == 2)
                ans -= 1;
            else if (n % 4 == 3)
                ans -= n + 1;
        }
        cout << ans << endl;
    }
}