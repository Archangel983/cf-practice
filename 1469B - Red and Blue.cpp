#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int m;
        cin>>m;
        vector<int> a(m);
        for(int i=0;i<m;i++)cin>>a[i];
        int sum=0,maxR=0;
        for(int x:v){
            sum+=x;
            maxR=max(sum,maxR);
        }
        sum = 0;
        int maxB = 0;
        for (int x : a) {
            sum += x;
            maxB = max(maxB, sum);
        }

        cout << maxR + maxB << endl;
    }
}