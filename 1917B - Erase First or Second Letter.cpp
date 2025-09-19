#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        int ans = 0;
        for (auto it : s)
        {
            st.insert(it);
            ans += st.size();
        }
        cout << ans << "\n";
    }
}