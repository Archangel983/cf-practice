#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int depth = n / 2;
        long long int ans =0;
        for(long long int i=1;i<=depth;i++){
            ans+=8*i*i; //8k^2 from Faulhaber's also show show that, k=m(m+1)/2 and k^2=m(m+1)(2m+1)/6
        }
        cout<<ans<<endl;
    }
}