#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        sum += num;
    }
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        if ((sum + i) % (n + 1) != 1)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}