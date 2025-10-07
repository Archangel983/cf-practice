#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int i=n-1;
        while(i>0 && a[i-1]>=a[i])i--;
        while(i>0 && a[i-1]<=a[i])i--;
        cout<<i<<"\n";
    }
}