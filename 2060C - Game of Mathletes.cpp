#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        map<int,int> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ++m[arr[i]];
        }
        for (int i = 0; i < n; i++)
        {
            int x=min(m[arr[i]],m[k-arr[i]]);
            if(x>0){
                if(arr[i] == (k - arr[i])) x /= 2;
                m[arr[i]]-=x;
                m[k-arr[i]]-=x;
                count+=x;
            }
        }
        cout << count << endl;
    }
}