#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=1,maxi=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            count++;
        }
        else
        count=1;
        maxi=max(maxi,count);
    }
    cout<<maxi<<endl;
}