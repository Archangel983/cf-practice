#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> a(n),b;
    for(auto &x:a)cin>>x;
    b=a;
    sort(b.begin(),b.end());
    int l=0,r=n-1;
    while(l<n && a[l]==b[l])l++;
    while(r>=0 && a[r]==b[r])r--;
    if(l>=r){
        cout<<"yes\n1 1";
        return 0;
    }
    reverse(a.begin()+l,a.begin()+r+1);
    if(a==b){
        cout<<"yes\n"<<l+1<<" "<<r+1;
    }
    else
    cout<<"no\n";
}