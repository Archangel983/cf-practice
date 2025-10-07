#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int n;
bool flag = false;
vector<int> a;
void dfs(int idx, int sum)
{
    if (idx == n)
    {
        if (sum % 360 == 0)
        {
            flag = true;
        }
        return;
    }
    dfs(idx + 1, sum + a[idx]);
    dfs(idx + 1, sum - a[idx]);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dfs(0, 0);
    cout << (flag ? "YES" : "NO") << "\n";
}