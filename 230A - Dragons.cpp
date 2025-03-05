#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    bool flag = true;
    pair<int, int> a[1000];
    while (cin >> s >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (s > a[i].first)
            {
                s += a[i].second;
            }
            else if (s <= a[i].first)
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
            return 0;
        }
        else if (flag == true)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
}