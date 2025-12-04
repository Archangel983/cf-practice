#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<int> a(n);
        iota(a.begin(), a.end(), 1);
        bool ok = true;
        for (int i = 0; i < n;)
        {
            if (s[i] == '1')
            {
                i++;
                continue;
            }
            int j = i;
            while (j + 1 < n && s[j + 1] == '0')
                j++;
            if (j == i)
            {
                ok = false;
                break;
            }
            for (int k = i; k < j; k++)
            {
                a[k] = k + 2;
            }
            a[j] = i + 1;
            i = j + 1;
        }
        if (!ok)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; ++i)
                cout << a[i] << " ";
            cout << "\n";
        }
    }
}