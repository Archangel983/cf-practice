#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        index += pow(2, i);
    }
    int pos = 0;
    for (char c : s)
    {
        pos = pos * 2;
        if (c == '7')
            pos += 1;
    }
    index += pos + 1;
    cout << index << "\n";
}