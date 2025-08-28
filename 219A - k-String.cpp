#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string s;
    cin >> k >> s;
    vector<int> v(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    string base;
    for (int i = 0; i < 26; i++)
    {
        base.append(v[i] / k, 'a' + i);
    }
    string result = base;
    for (int i = 1; i < k; i++)
    {
        result += base;
    }
    cout << result << endl;
}