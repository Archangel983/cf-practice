#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int suma = 0, sumb = 0, sumc = 0;
    for (int i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        suma += c;
    }
    for (int i = 0; i < n - 1; i++)
    {
        ll c;
        cin >> c;
        sumb += c;
    }
    for (int i = 0; i < n - 2; i++)
    {
        ll c;
        cin >> c;
        sumc += c;
    }
    cout << suma - sumb << "\n";
    cout << sumb - sumc << "\n";
}