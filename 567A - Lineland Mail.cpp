#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int left, right;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            left = abs(v[0] - v[1]);
            right = abs(v[n - 1] - v[0]);
            cout << min(left, right) << " " << max(right, left) << endl;
        }
        else if (i == n-1)
        {
            left = abs(v[n- 1] - v[n - 2]);
            right = abs(v[n - 1] - v[0]);
            cout << min(left, right) << " " << max(right, left) << endl;
        }
        else
        {
            left = min(abs(v[i] - v[i-1]),abs(v[i+1]-v[i]));
            right = max(abs(v[n - 1] - v[i]),abs(v[0]-v[i]));
            cout << min(left, right) << " " << max(right, left) << endl;
        }
    }
}