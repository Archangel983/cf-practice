#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long ops = 0;
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool ok = true;
        for (int i = n - 2; i >= 0; i--)
        {
            while (v[i] >= v[i + 1] && v[i] > 0)
            {
                v[i] /= 2;
                ops++;
            }
            if (v[i] >= v[i + 1])
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? ops : -1) << "\n";
    }
}
