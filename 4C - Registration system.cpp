#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> count;
    string s;
    while (n--)
    {
        cin >> s;
        if (count[s] == 0)
        {
            cout << "OK" << endl;
            count[s] = 1;
        }
        else
        {
            cout << s << count[s] << endl;
            count[s]++;
        }
    }
}