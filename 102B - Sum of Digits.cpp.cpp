#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    string s;
    cin >> s;
    ll count=0;
    while (s.size() > 1)
    {
        ll sum = 0;
        for (int i = 0; i < (int)s.size(); i++)
        {
            sum += (s[i] - '0');
        }
        s = to_string(sum);
        count++;
    }
    cout << count << endl;
}