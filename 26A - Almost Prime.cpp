#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> count(n+1,0);
    for(int p=2;p<=n;p++){
        if(count[p]==0){
            for(int multiple=p;multiple<=n;multiple+=p){
                count[multiple]++;
            }
        }
    }
    int ans=0;
    for(int i=2;i<=n;i++){
        if(count[i]==2){
            ans++;
        }
    }
    cout<<ans<<endl;
}