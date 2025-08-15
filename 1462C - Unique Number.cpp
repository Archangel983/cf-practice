#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> v;
        cin >> n;
        if (n > 45)
        {
            cout << -1 << endl;
        }
        else
        {
            int num = 9;
            while (n > 0 && num > 0)
            {
                if (n >= num)
                {
                    v.push_back(num);
                    n -= num;
                }
                num--;
            }
        }
        sort(v.begin(), v.end());
        for (auto it : v)
            cout << it;
        cout << endl;
    }
}