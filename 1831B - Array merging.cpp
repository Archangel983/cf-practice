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
        vector<int> a(n), b(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        for (auto &x : b)
        {
            cin >> x;
        }
        unordered_map<int, int> A, B;
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                cnt++;
            else
            {
                A[a[i - 1]] = max(A[a[i - 1]], cnt);
                cnt = 1;
            }
        }
        A[a[n - 1]] = max(A[a[n - 1]], cnt);
        cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (b[i] == b[i - 1])
            {
                cnt++;
            }
            else
            {
                B[b[i - 1]] = max(B[b[i - 1]], cnt);
                cnt = 1;
            }
        }
        B[b[n - 1]] = max(B[b[n - 1]], cnt);
        int mx = 0;
        for (auto &p : A)
            mx = max(mx, p.second);
        for (auto &p : B)
            mx = max(mx, p.second);
        for (auto &p : A)
            if (B.count(p.first))
                mx = max(mx, p.second + B[p.first]);
        cout << mx << endl;
    }
    return 0;
}