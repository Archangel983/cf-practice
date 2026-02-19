#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n<<" ";
            for(int i=2;i<=n-2;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<1<<"\n";
        }
        else{
            cout<<n-1<<" ";
            for(int i=2;i<=n-2;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<n<<" "<<1<<"\n";
        }
    }
}