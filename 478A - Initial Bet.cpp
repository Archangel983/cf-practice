#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    ll sum=a+b+c+d+e;
    if(sum%5==0 && sum>0){
        cout<<sum/5<<"\n";
    }
    else
    cout<<-1<<"\n";
}