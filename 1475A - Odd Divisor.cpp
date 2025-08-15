#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a;
        cin>>a;
        if(a>0 && (a&(a-1))==0){
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
}