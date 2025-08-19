#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int total=((k+n-1)/k)*k;
        cout<<(total+n-1)/n<<endl;
    }
}