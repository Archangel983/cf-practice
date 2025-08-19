#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        long long diff = abs(x - y);
        long long common = min(x, y);
        long long cost = diff * a + common * min(b, 2 * a);
        cout << cost << endl;
    }
}
