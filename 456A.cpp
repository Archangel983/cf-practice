#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    pair<int,int> p[n];
    for (int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    for (int j=0;j<n-1;j++){
        if (p[j].first<p[j+1].first && p[j].second>p[j+1].second){
            cout<<"Happy Alex\n";
            return 0;
        }
        
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}
