#include<bits/stdc++.h>
using namespace std;
int main(){
    char dir;
    string s;
    cin>>dir>>s;
    string layout="qwertyuiopasdfghjkl;zxcvbnm,./";
    for(char c:s){
        size_t pos=layout.find(c);
        if(dir=='R'){
            cout<<layout[pos-1];
        }
        else
        cout<<layout[pos+1];
    }
    cout<<endl;
}