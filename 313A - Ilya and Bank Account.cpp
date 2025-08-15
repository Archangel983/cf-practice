#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    string b;
    cin>>a;
    if(a>=0){
        cout<<a<<endl;
    }
    else{
        a*=-1;
        b=to_string(a);
        reverse(b.begin(),b.end());
        if(b[0]>b[1]){
            b.erase(0,1);
        }
        else if(b[1]>=b[0]){
            b.erase(1,1);
        }
        reverse(b.begin(),b.end());
         cout<<-stoll(b)<<endl;
    }
   
}