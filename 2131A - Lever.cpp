#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=1;
        cin>>n;
        vector<int> a,b;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            a.push_back(val);
        }
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            b.push_back(val);
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                count+=(a[i]-b[i]);
            }
        }
        cout<<count<<endl;
    }
}