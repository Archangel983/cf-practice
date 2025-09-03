#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> price(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    sort(price.begin(), price.end());
    int q;
    cin >> q;
    while (q--)
    {
        ll coins;
        cin >> coins;
        int left = 0, right = price.size() - 1,ans=0;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (coins >= price[mid])
            {
                ans=mid+1;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}