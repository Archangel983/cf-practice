#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void solve(int n)
{
    for (int i = 1; i <= 10000; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            v.push_back(i);
        }
        else
        {
            continue;
        }
    }
    cout << v[n - 1] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
}