#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, number = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i] >> b[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] == b[j])
            {
                number++;
            }
            if (b[i] == a[j])
            {
                number++;
            }
        }
    }
    cout << number << endl;
}