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
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        rotate(v.begin(), v.begin() + 1, v.end());
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}