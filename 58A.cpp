#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, word = "hello";
    int j = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == word[j])
        {
            j++;
        }
        if (j == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}