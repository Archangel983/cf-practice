#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> dict;
    while (m--)
    {
        string a, b;
        cin >> a >> b;
        if (b.size() < a.size())
        {
            dict[a] = b;
        }
        else
            dict[a] = a;
    }
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        cout << dict[word] << " ";
    }
    cout << endl;
}