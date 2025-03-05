#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_set<char> distinct;
    for(int i=0;i<s.length();i++){
        distinct.insert(s[i]);
    }
    if (distinct.size()%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
}