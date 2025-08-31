#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for (auto &x : a)
    {
        cin >> x;
        freq[x]++;
    }
    int maxi = 0;
    for (auto &p : freq)
    {
        maxi = max(maxi, p.second);
    }
    cout << maxi << " " << freq.size() << '\n';
    return 0;
}