#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, total = 0;
    cin >> k >> n >> w;
    for (int i = w; i > 0; i--)
    {
        total = total + (k * i);
    }
    if (total > n)
    {
        cout << (total - n) << endl;
    }
    else
        cout << "0" << endl;
}