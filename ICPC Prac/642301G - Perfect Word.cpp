#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    vector<string> a(n);
    for (auto &x : a)
    {
        cin >> x;
        s += x;
    }
    vector<int> freq(26, 0);
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i].size(); i++)
        {
            if (freq[j] <= count(a[i].begin(), a[i].end(), a[i][j]))
            {
                flag = false;
            }
            if (!flag)
                break;
        }
    }
}