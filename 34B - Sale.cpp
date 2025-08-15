#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        a.push_back(value);
    }
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if(a[i]>0){
            break;
        }
        sum += a[i];
    }
    cout << abs(sum) << endl;
}