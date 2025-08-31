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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        v.erase(unique(v.begin(), v.end()), v.end());
        int count = 0;
        int prev = -1;
        for (int x : v)
        {
            if (x >= prev + 2)
            {
                count++;
                prev = x;
            }
        }
        cout << count << endl;
    }
    return 0;
}