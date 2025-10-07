#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float n, t;
    cin >> n >> t;
    float m;
    cin >> m;
    float x, y;
    cin >> x >> y;
    float time = (m / (x * 60)) + ((n - m) / (y * 60));
    if (time - t >= 0)
        cout << ceil(time)-t << "\n";
    else
        cout << 0 << "\n";
}