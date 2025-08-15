#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> m;
        for(int i=0,a;i<n;i++){
            cin>>a;
            m[a]++;
        }
        int count=0,count2=0;
        for(auto it:m){
            if(it.second==1)
            count++;
            else
            count2++;
        }
        int ans=(count/2)+(count%2);
        ans*=2;
        ans+=count2;
        cout<<ans<<endl;
    }
}