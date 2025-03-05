#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total = (k * l) / nl;
    int slices = c * d;
    cout << min(min(total, slices), p / np) / n << endl;
}