#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    string n;
    cin >> n;
    string s = n;
    reverse(n.begin(), n.end());
    s += n;
    cout << s << endl;
}