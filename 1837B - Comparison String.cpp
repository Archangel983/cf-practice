#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxi = 0;
        int curr = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                curr++;
            }
            else
                curr = 1;
            maxi = max(maxi, curr);
        }
        cout << max(maxi, 1) + 1 << endl;
    }
}