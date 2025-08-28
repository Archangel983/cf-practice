#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<pair<long long int, int>> v(n);
        for (int i = 1; i <= n; i++)
        {
            long long int a;
            cin >> a;
            long long int r = a % k;
            if (r == 0)
                r = k;
            v.push_back({r, i});
        }
        sort(v.begin(), v.end(), [](const pair<long long int, int> &A, const pair<long long int, int> &B)
             {
            if(A.first!=B.first) return A.first>B.first;
            return A.second<B.second; });
        for (int i = 0; i < n; i++)
        {
            cout << v[i].second << " ";
        }
        cout << endl;
    }
}