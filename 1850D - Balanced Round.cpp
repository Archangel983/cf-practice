#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=1,maxi=1;
        cin>>n>>k;
        vector<int> a;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            a.push_back(val);
        }
        sort(a.begin(),a.end());
        for(int i=1;i<a.size();i++){
            if(a[i]-a[i-1]<=k){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else{
                cnt=1;
            }
        }
        cout<<n-maxi<<endl;
    }
}