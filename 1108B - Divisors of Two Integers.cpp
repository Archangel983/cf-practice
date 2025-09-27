#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int x = a.back();
    multiset<int> rem(a.begin(), a.end());
    for (int i = 1; i * i * 1LL <= x; i++)
    {
        if (x % i == 0)
        {
            rem.erase(rem.find(i));
            if (i != x / i)
                rem.erase(rem.find(x / i));
        }
    }
    int y = *max_element(rem.begin(), rem.end());
    cout << x << " " << y << "\n";
}