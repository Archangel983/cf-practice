#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int A = 0, D = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            A++;
        }
        else if (s[i] == 'D')
        {
            D++;
        }
    }
    if (A > D)
    {
        cout << "Anton" << endl;
    }
    else if (D > A)
    {
        cout << "Danik" << endl;
    }
    else if (D == A)
    {
        cout << "Friendship" << endl;
    }
}