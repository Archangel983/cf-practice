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
        long long int sum = 0;
        vector<int> mins;
        vector<int> second_mins;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> v(m);
            for (int i = 0; i < m; i++)
                cin >> v[i];
            sort(v.begin(), v.end());
            mins.push_back(v[0]);
            second_mins.push_back(v[1]);
            sum += v[1];
        }
        long long int ans = sum + *min_element(mins.begin(), mins.end()) - *min_element(second_mins.begin(), second_mins.end());
        cout << ans << endl;
    }
}