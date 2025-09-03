#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    int fedor;
    cin >> fedor;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int diff = fedor ^ v[i];
        int cnt = 0;
        while (diff)
        {
            cnt += diff & 1;
            diff >>= 1;
        }
        if (cnt <= k)
        {
            count++;
        }
    }
    cout << count << endl;
}