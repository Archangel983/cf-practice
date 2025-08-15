#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,cnt2=0,cnt3=0;
        cin>>a;
        while(a%2==0){
            cnt2++;
            a/=2;
        }
        while(a%3==0){
            cnt3++;
            a/=3;
        }
        if(a!=1 || cnt2>cnt3){
            cout<<-1<<endl;
        }
        else{
            cout<<(2*cnt3-cnt2)<<endl;
        }
    }
}