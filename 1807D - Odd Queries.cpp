#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n), prefix(n + 1, 0);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            prefix[i + 1] = prefix[i] + a[i];  // prefix sum
        }

        long long total_sum = prefix[n];

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            long long range_sum = prefix[r] - prefix[l - 1];
            long long new_sum = total_sum - range_sum + 1LL * (r - l + 1) * k;

            cout << (new_sum % 2 == 1 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
