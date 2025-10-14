#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        bool ok = false;
        int swim = 0;
        int pos = -1;

        while (true) {
            if (pos + m >= n) {
                ok = true;
                break;
            }

            int next = -1;
            for (int j = min(n - 1, pos + m); j > pos; j--) {
                if (s[j] == 'C') continue;
                if (s[j] == 'L') {
                    next = j;
                    break;
                }
            }
            if (next == -1) {
                for (int j = min(n - 1, pos + m); j > pos; j--) {
                    if (s[j] == 'C') continue;
                    if (s[j] == 'W') {
                        next = j;
                        break;
                    }
                }
            }
            if (next == -1) break;
            pos = next;
            if (s[pos] == 'W') {
                while (true) {
                    if (pos + 1 >= n) {
                        ok = (swim + 1 <= k);
                        pos = n;
                        break;
                    }
                    if (s[pos + 1] == 'C') {
                        ok = false;
                        pos = n;
                        break;
                    }
                    swim++;
                    if (swim > k) {
                        ok = false;
                        pos = n;
                        break;
                    }
                    pos++;
                    if (s[pos] == 'L') break;
                }
                if (pos >= n || ok) break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
