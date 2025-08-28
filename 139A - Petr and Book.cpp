#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int sum = 0;
    vector<long long int> v;
    for (int i = 0; i < 7; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
        sum += val;
    }
    if (n > sum)
    {
        n %= sum;
        if(n==0){
            n=sum;
        }
        for (int i = 0; i < 7; i++)
        {
            n -= v[i];
            if (n <= 0)
            {
                cout << i + 1 << endl;
                return 0;
            }
            else
                continue;
        }
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {
            n -= v[i];
            if (n <= 0)
            {
                cout << i + 1 << endl;
                return 0;
            }
            else
                continue;
        }
    }
}
