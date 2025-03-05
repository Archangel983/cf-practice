#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, s2, finale;
    cin >> s >> s1 >> s2;
    finale = s + s1;
    sort(finale.begin(), finale.end());
    sort(s2.begin(), s2.end());
    if (finale == s2)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}