#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i <= n-3; i++)
        {
            if (s.substr(i, 3) == "pie" || s.substr(i, 3) == "map")
            {
                count++;
                i+=2;
            }
        }
        cout << count << "\n";
    }
}