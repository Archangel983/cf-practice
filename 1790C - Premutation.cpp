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
        vector<vector<int>> v(n , vector<int>(n - 1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> v[i][j];
            }
        }
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            map[v[i][0]]++;
        }
        int first = -1;
        for (auto &p : map)
        {
            if (first == -1 || p.second > map[first])
            {
                first = p.first;
            }
        }
        vector<int> rest;
        for (int i = 0; i < n; i++)
        {
            if (v[i][0] != first)
            {
                rest = v[i];
            }
        }
        cout << first << " ";
        for (auto &p : rest)
        {
            cout << p << " ";
        }
        cout << endl;
    }
    return 0;
}