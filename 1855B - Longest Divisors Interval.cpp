#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,size=0;
        cin>>n;
        for(long long int i=1;;i++){
            if(n%i!=0){
                break;
            }
            else
            size++;
        }
        cout<<size<<endl;
    }
}