#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a((n*(n-1))/2);
        for (int i=0;i<(n*(n-1))/2;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<ll> b(n);
        int indx=0;
        for(int i=0;i<n-1;i++){
            b[i]=a[indx];
            indx+=(n-1-i);
        }
        b[n-1]=1e9;
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
}