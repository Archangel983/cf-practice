#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        vector<ll> v;
        int p = d + 1;
        while (true)
        {
            bool prime = true;
            for (int i = 2; i * i <= p; i++)
            {
                if (p % i == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (prime)
                break;
            p++;
        }
        ll q = p + d;
        while (true)
        {
            bool prime = true;
            for (int i = 2; i * i <= q; i++)
            {
                if (q % i == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (prime)
                break;
            q++;
        }
        cout << 1LL * p * q << endl;
    }
}