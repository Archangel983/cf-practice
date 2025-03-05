#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lowercase=0,uppercase=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>=97){
            lowercase++;
        }
        else
        uppercase++;
    }
    if(uppercase>lowercase){
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s;
    }
    else if (lowercase>uppercase || lowercase==uppercase){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }
}