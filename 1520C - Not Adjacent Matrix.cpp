#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n==2){
            cout<<-1<<endl;
            continue;
        }
        vector<int> nums;
        for (int i = 1; i <= n * n; i += 2)
        {
            nums.push_back(i);
        }
        for (int i = 2; i <= n * n; i += 2)
        {
            nums.push_back(i);
        }
        for (int i = 0; i < n * n; i++)
        {
            cout << nums[i];
            if (i % n == n - 1)
            {
                cout << endl;
            }
            else
                cout << " ";
        }
    }
}