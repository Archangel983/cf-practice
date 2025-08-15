#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d, count = 0, ans=0;
    cin >> n >> b >> d;
    while (n--)
    {
        int x;
        cin >> x;
        if (x <= b)
        {
            count += x;
            if (count > d)
            {
                ans ++;
                count=0;
            }
        }
    }
    cout << ans << endl;
}