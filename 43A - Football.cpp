#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, a = 0, b = 0;
    cin >> n;
    string s, s1,s2;
    cin >> s;
    n--;
    a++;
    while (n--)
    {
        cin >> s1;
        if (s1 == s)
        {
            a++;
        }
        else{
            b++;
            s2=s1;
        }
    }
    if (a > b)
    {
        cout << s << endl;
    }
    else
        cout << s2 << endl;
}