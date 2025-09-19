#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    ll a = sqrt(1.0 * x * z / y);
    ll b = x / a;
    ll c = z / a;
    cout << 4 * (a + b + c) << "\n";
    return 0;
}
