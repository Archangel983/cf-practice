#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=2;;i++){
            int s=pow(2,i)-1;
            if(n%s==0){
                cout<<n/s<<endl;
                break;
            }
        }
    }
}