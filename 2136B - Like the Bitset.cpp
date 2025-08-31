#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                while (s[i] == '1')
                {
                    count++;
                    i++;
                }
                if (count >= k)
                {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
                count = 0;
            }
        }
        if (flag == false)
        {
            continue;
        }
        int max = n;
        int min = 1;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                v.push_back(max);
                max--;
            }
            else
            {
                v.push_back(min);
                min++;
            }
        }
        cout << "YES" << endl;
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}