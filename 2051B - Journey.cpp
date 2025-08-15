#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        vector<int> num = {a, b, c};
        int complete = n / (a + b + c);
        int count = complete * (a + b + c);
        int res = complete * 3;
        for (int i = 0; count < n; i++, res++)
        {
            count += num[i % 3];
        }
        cout << res << endl;
    }
}