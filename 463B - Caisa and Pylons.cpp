#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll energy=-a[0];
    ll mind=-a[0];
    for(int i=1;i<n;i++){
        energy+=a[i-1]-a[i];
        mind=min(mind,energy);
    }
    if(mind<0)
    cout<<abs(mind)<<"\n";
    else
    cout<<0<<"\n";
}