#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, H, M;
        cin >> n >> H >> M;
        int bed = H * 60 + M;
        int maxh = 24 * 60;
        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;
            int alarm = h * 60 + m;
            int diff;
            if (alarm >= bed)
            {
                diff = alarm - bed;
            }
            else
                diff = (24 * 60 - bed) + alarm;
            maxh = min(diff, maxh);
        }
        cout << maxh / 60 << " " << maxh % 60 << endl;
    }
}