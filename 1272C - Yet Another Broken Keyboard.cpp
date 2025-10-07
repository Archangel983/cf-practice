#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_set<char> g;
    for (int i = 0; i < k; i++)
    {
        char c;
        cin >> c;
        g.insert(c);
    }
    ll len = 0, sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (g.count(s[i]))
        {
            len++;
        }
        else
        {
            sum += ((len) * (len + 1)) / 2;
            len = 0;
        }
    }
    sum += ((len) * (len + 1)) / 2;
    cout << sum << "\n";
}