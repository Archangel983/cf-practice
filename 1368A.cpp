#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int count=0;
        while(max(a,b)<=c){
            if(a<b){
                a+=b;
            }
            else
            b+=a;
            count++;
        }
        cout<<count<<endl;
    }
}