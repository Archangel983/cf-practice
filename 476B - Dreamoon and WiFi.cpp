#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    int t = 0, cur = 0, k = 0;
    for (char c : s1)
        t += (c == '+') ? 1 : -1;
    for (char c : s2)
    {
        if (c == '+')
            cur++;
        else if (c == '-')
            cur--;
        else
            k++;
    }
    int need = t - cur;
    if (abs(need) > k || (need + k) % 2 != 0)
    {
        cout << fixed << setprecision(12) << 0.0;
        return 0;
    }
    int x = (need + k) / 2;
    double ways = 1;
    for (int i = 0; i < x; i++)
        ways *= (k - i) / (double)(i + 1);
    double total = pow(2, k);
    cout << fixed << setprecision(12) << ways / total;
}