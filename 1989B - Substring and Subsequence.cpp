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
        string a, b;
        cin >> a >> b;
        int ans = a.size() + b.size();
        for (int i = 0; i < b.size(); i++)
        {
            int ptr = i;
            for (int j = 0; j < a.size(); j++)
            {
                if (ptr < b.size() && a[j] == b[ptr])
                {
                    ptr++;
                }
                ans = min(ans, ((int)a.size() + (int)b.size() - ptr + i));
            }
        }
        cout << ans << "\n";
    }
}