#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<bool> prime(n + 2, true);
    for (int p = 2; p * p <= n + 1; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n + 1; i += p)
            {
                prime[i] = false;
            }
        }
    }
    if (n <= 2)
    {
        cout << 1 << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << 2 << "\n";
        for (int i = 2; i <= n + 1; i++)
        {
            if (prime[i] == true)
            {
                cout << 1 << " ";
            }
            else
                cout << 2 << " ";
        }
        cout << "\n";
    }
}