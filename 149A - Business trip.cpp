#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, count = 0;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < 12; i++)
    {
        int val;
        cin >> val;
        a.push_back(val);
    }
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < 12 && sum < n; i++)
    {
        sum += a[i];
        count++;
    }
    if (sum < n)
    {
        cout << -1 << endl;
    }
    else
        cout << count << endl;
}