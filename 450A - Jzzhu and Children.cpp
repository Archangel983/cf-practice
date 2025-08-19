#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int index = 1;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int maxrounds = (v[1] + m - 1) / m;
    for (int i = 2; i <= n; i++)
    {
        int rounds = (v[i] + m - 1) / m;
        if (rounds >= maxrounds)
        {
            maxrounds = rounds;
            index = i;
        }
    }
    cout << index << endl;
}