#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    ll sum = 0, index = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    ll minsum = sum;
    for (int i = k; i < n; i++)
    {
        sum += a[i] - a[i - k];
        if (sum < minsum)
        {
            minsum = sum;
            index = i-k+1;
        }
    }
    cout << index + 1 << endl;
    return 0;
}