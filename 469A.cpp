#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q;
    cin >> n >> p;
    int s1[p];
    set<int> set;
    for (int i = 0; i < p; i++)
    {
        cin >> s1[i];
        set.insert(s1[i]);
    }
    cin >> q;
    int s2[q];
    for (int i = 0; i < q; i++)
    {
        cin >> s2[i];
        set.insert(s2[i]);
    }
    if (set.size() == n)
    {
        cout << "I become the guy." << endl;
        return 0;
    }
    cout << "Oh, my keyboard!" << endl;
    return 0;
}