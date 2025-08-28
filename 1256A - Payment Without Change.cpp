#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        long long int use = min(a, s / n);
        long long int rem = s - n * use;
        if (b >= rem)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}