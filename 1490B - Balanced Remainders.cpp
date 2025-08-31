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
        vector<int> cnt(3, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x % 3]++;
        }
        int k = n / 3;
        int moves = 0;
        while (!(cnt[0] == k && cnt[1] == k && cnt[2] == k))
        {
            for (int i = 0; i < 3; i++)
            {
                if (cnt[i] > k)
                {
                    int extra = cnt[i] - k;
                    cnt[i] -= extra;
                    cnt[(i + 1) % 3] += extra;
                    moves += extra;
                }
            }
        }
        cout << moves << "\n";
    }
    return 0;
}
