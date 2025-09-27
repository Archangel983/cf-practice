#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n), neg, pos, zero;
    for (int &i : a)
    {
        cin >> i;
        if (i < 0)
            neg.push_back(i);
        else if (i > 0)
            pos.push_back(i);
        else
            zero.push_back(i);
    }
    vector<int> s1, s2, s3;
    s1.push_back(neg.back());
    neg.pop_back();
    if (neg.size() % 2)
    {
        s3.push_back(neg.back());
        neg.pop_back();
    }
    for (int x : pos)
        s2.push_back(x);
    for (int x : neg)
        s2.push_back(x);
    for (int x : zero)
        s3.push_back(x);
    cout << s1.size();
    for (int x : s1)
        cout << " " << x;
    cout << "\n";
    cout << s2.size();
    for (int x : s2)
        cout << " " << x;
    cout << "\n";
    cout << s3.size();
    for (int x : s3)
        cout << " " << x;
    cout << "\n";
}
