#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int zeroes= count(s.begin(),s.end(),'0');
        if(zeroes==1){
            cout<<"BOB\n";
        }
        else if(zeroes%2==0){
            cout<<"BOB\n";
        }
        else
        cout<<"ALICE\n";
    }
}