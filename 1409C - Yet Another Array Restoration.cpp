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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> best;
        int maxb = INT_MAX;
        for (int k = 1; k <= n - 1; k++)
        {
            int diff = (y - x) % k;
            if (diff != 0)
                continue;
            else
            {
                int d = (y - x) / k;
                vector<int> arr;
                int curr = y;
                while (arr.size() < n && curr > 0)
                {
                    arr.push_back(curr);
                    curr -= d;
                }
                curr = y + d;
                while (arr.size() < n)
                {
                    arr.push_back(curr);
                    curr += d;
                }
                sort(arr.begin(), arr.end());
                if (arr.back() < maxb)
                {
                    best = arr;
                    maxb = arr.back();
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << best[i] << " ";
        }
        cout << "\n";
    }
}