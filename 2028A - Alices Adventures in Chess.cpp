#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a = 0, b = 0;
        string s;
        cin >> s;
        set<pair<int, int>> visited;
        visited.insert({a, b});
        vector<pair<int, int>> path;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N')
            {
                b++;
            }
            else if (s[i] == 'S')
            {
                b--;
            }
            else if (s[i] == 'E')
            {
                a++;
            }
            else if (s[i] == 'W')
            {
                a--;
            }
            path.push_back({a, b});
            visited.insert({a, b});
        }
        if (visited.count({x, y}))
        {
            cout << "YES" << endl;
            continue;
        }
        int da = a;
        int db = b;
        bool found = false;
        for (int k = 1; k <= 100; k++)
        {
            for (auto i = 0; i < path.size(); i++)
            {
                int px = path[i].first;
                int py = path[i].second;
                int nx = da * k + px;
                int ny = db * k + py;
                if (nx == x && ny == y)
                {
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}