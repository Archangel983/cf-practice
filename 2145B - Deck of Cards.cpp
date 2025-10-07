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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int zero = 0, ones = 0, two = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                zero++;
            else if (s[i] == '1')
                ones++;
            else
                two++;
        }
        if (k == n)
        {
            cout << string(n, '-') << "\n";
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            if (i <= zero || i > n - ones)
            {
                cout << '-';
            }
            else if (i <= zero + two || i > n - (ones + two))
            {
                cout << "?";
            }
            else
            {
                cout << "+";
            }
        }
        cout << "\n";
    }
}