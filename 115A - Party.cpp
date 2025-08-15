#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int depth = 0, curr = i;
        while (curr != -1)
        {
            depth++;
            curr = p[curr];
        }
        ans = max(ans, depth);
    }
    cout << ans << endl;
}