#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, points;
    cin >> n >> points;
    int max(points), min(points), count(0);
    while (--n)
    {
        cin >> points;
        if (points < min)
        {
            count++;
            min = points;
        }
        else if (points > max)
        {
            count++;
            max = points;
        }
    }
    cout << count << endl;
}