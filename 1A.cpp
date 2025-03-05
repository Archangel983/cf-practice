#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, m, a;
    cin >> n >> m >> a;
    long long int value = ceil(double(n / a)) * ceil(double(m / a));
    cout << value;
}