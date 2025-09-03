#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin>>a>>b;
        cout<<min({(a+b)/3,a,b})<<"\n";
    }
    return 0;
}