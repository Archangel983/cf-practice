#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        vector<long long int> v;
        cin >> n;
        long long int p = 10;
        for (int i = 1; i < 18; i++)
        {
            long long int d = p + 1;
            if (n % d == 0)
            {
                long long int x = n / d;
                if (x > 0)
                    v.push_back(x);
            }
            if (p > n)
                break;
            p *= 10;
        }
        if (v.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            cout << v.size() << endl;
            sort(v.begin(),v.end());
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}