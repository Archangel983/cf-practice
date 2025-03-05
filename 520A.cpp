#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> set;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < n; i++)
    {
        set.insert(s[i]);
    }
    if (set.size() == 26)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}