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
        long long int balance = 0, min_bal = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                balance++;
            }
            else
                balance--;
            min_bal = min(balance, min_bal);
        }
        cout << -min_bal << endl;
    }
}