#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    ll temp = 5, r = 1;
    while (n > temp * r)
    {
        n -= temp * r;
        r *= 2;
    }
    ll index = (n - 1) / r;
    cout << names[index] << "\n";
    return 0;
}