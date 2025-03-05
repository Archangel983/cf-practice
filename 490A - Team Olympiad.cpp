#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    queue<int> one;
    queue<int> two;
    queue<int> three;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        if (k == 1)
        {
            one.push(i);
        }
        else if (k == 2)
        {
            two.push(i);
        }
        else if (k == 3)
        {
            three.push(i);
        }
    }
    int min;
    if (one.size() <= two.size() && one.size() <= three.size())
    {
        min = one.size();
    }
    else if (two.size() <= one.size() && two.size() <= three.size())
    {
        min = two.size();
    }
    else
        min = three.size();
    cout << min << endl;
    for (int i = 1; i <= min; i++)
    {
        cout << one.front() << " " << two.front() << " " << three.front() << endl;
        one.pop();
        two.pop();
        three.pop();
    }
}