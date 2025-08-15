#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool flag = false;
    cin >> s;
    for (int i = 0; i < 5; i++)
    {
        string s1;
        cin >> s1;
        if (s1[0] == s[0] || s1[1] == s[1])
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else{
    cout << "NO" << endl;}
}