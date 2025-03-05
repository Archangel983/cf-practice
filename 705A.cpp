#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "I hate it";
    }
    if (n > 1)
    {
        cout << "I hate that";
    }
    for (int i = 2; i < n; i++)
    {
        if(i%2==0 && n>2){
            cout<<" I love that";
        }
        if (i%2!=0){
            cout<<" I hate that";
        }
    }
    if(n%2==0 && n!=1){
        cout<<" I love it";
    }
    else if (n%2!=0 && n!=1){
        cout<<" I hate it";
    }
}