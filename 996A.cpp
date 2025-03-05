#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = n / 100;
    int b = (n % 100) / 20;
    int c = (n % 20) / 10;
    int d = (n % 10) / 5;
    int e = (n % 5);
    cout << a + b + c + d + e << endl;
}