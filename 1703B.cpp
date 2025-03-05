#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool visited[26] = {};
        int count = 0;
        for (char c : s)
        {
            if (!visited[c - 'A'])
            {
                count += 2;
                visited[c - 'A'] = true;
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }
}