#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin>>x;
        ll sum=0;
        int steps=0;
        while(sum<x){
            steps++;
            sum+=steps;
        }
        if(sum-x==1){
            cout<<steps+1<<"\n";
        }
        else
        cout<<steps<<"\n";
    }
}