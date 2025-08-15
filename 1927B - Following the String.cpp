#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        string s;
        vector<char> chars; 
        vector<int> count; 
        char nextChar = 'a';

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                chars.push_back(nextChar);
                count.push_back(0);
                s.push_back(nextChar);
                count.back()++;
                nextChar++;
            } else {
                for (int idx = 0; idx < (int)chars.size(); idx++) {
                    if (count[idx] == a[i]) {
                        s.push_back(chars[idx]);
                        count[idx]++;
                        break;
                    }
                }
            }
        }
        cout << s << "\n";
    }
}
