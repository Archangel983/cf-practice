#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b;
    cin >> a >> b;
    ll sum = a + b;
    string s = to_string(a);
    string s1 = to_string(b);
    string res = to_string(sum);
    s.erase(remove(s.begin(),s.end(),'0'),s.end());
    s1.erase(remove(s1.begin(),s1.end(),'0'),s1.end());
    res.erase(remove(res.begin(),res.end(),'0'),res.end());
    a = stoll(s);
    b = stoll(s1);
    sum = stoll(res);
    if (a + b == sum)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}