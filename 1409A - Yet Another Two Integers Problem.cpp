#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, count;
        cin >> a >> b;
        int c = abs(b - a);
        count = (c / 10);
        if(c%10!=0){
            count++;
        }
        cout << count << endl;
    }
}