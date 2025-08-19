#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n+1);
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
    }
    int pos = 1;
    while (pos < t)
    {
        pos += v[pos];
    }
    if (pos == t)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}