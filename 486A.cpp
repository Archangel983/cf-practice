#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int t;
    cin >> t;
    ll int result = pow(-1, t);
    cout << (result * (t + 1)) / 2 << endl;
}