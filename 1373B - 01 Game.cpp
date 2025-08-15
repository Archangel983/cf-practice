#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int count1=0,count0=0,count;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count1++;
            }
            else
            count0++;
        }
            count=min(count1,count0);
            if(count%2==0){
                cout<<"NET"<<endl;
            }
            else
            cout<<"DA"<<endl;
        
    }
}