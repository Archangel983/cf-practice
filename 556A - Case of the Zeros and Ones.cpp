#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt1=0,cnt0=0,count;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt1++;
        }
        else
        cnt0++;
    }
    count=min(cnt1,cnt0);
    cout<<n-2*count<<endl;
}