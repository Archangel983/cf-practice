#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> odd,even;
        for (int i=0;i<n;i++)
        {   
            int x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        if(odd.empty()){
            for(int i=0;i<n;i++){
                cout<<0<<" ";
            }
            cout<<"\n";
            continue;
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end(),greater<int>());
        vector<ll> pref(even.size()+1,0);
        for(int i=0;i<even.size();i++){
            pref[i+1]=pref[i]+even[i];
        }
        int odd1=1,even1=0;
        for(int k=1;k<=n;k++){
            if(k>1){
                if(even1<even.size())even1++;
                else{
                    if(odd1+2<=odd.size()&&even1>0){
                        odd1+=2;
                        even1--;
                    }
                    else{
                        odd1++;
                    }
                }
            }
            if(odd1&1){
                cout<<odd.back()+pref[even1]<<" ";
            }
            else
            cout<<0<<" ";
        }
        cout<<"\n";
    }
}