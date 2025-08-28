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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int frontindex = 1, backindex = 1;

        for (int i = 1; i < n; i++)
        {
            int front;
            front = v[0];
            if (v[i] != front)
            {
                break;
            }
            else
            {
                frontindex++;
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            int back;
            back = v[n - 1];
            if (v[i] != back)
            {
                break;
            }
            else
            {
                backindex++;
            }
        }
        int ans;
        if (v[0] == v[n - 1])
            ans = max(0,n - frontindex - backindex);
        else
            ans = n - max(frontindex, backindex);
        cout << ans << endl;
    }
}