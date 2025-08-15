#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool ok = true;
    for (int i = 0; i < s.size();)
    {
        if (s.substr(i, 3) == "144")
            i += 3;
        else if (s.substr(i, 2) == "14")
            i += 2;
        else if (s.substr(i, 1) == "1")
            i += 1;
        else
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
}
