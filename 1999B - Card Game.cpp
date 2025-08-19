#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int wins = 0;
        vector<vector<int>> suneet = {{a, b}, {b, a}};
        vector<vector<int>> slavic = {{c, d}, {d, c}};
        for (auto &s1 : suneet)
        {
            for (auto &s2 : slavic)
            {
                int sunwins = 0, slavwins = 0;
                if (s1[0] > s2[0])
                {
                    sunwins++;
                }
                else if (s2[0] > s1[0])
                {
                    slavwins++;
                }
                if (s1[1] > s2[1])
                {
                    sunwins++;
                }
                else if (s2[1] > s1[1])
                {
                    slavwins++;
                }
                if (sunwins > slavwins)
                    wins++;
            }
        }
        cout << wins << endl;
    }
}