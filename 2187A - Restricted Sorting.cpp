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
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        ll mn = *min_element(a.begin(),a.end());
        ll mx=*max_element(a.begin(),a.end());
        ll k=LLONG_MAX;
        bool sorted=false;
        sort(b.begin(), b.end());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                sorted=true;
                k=min(k,max(a[i]-mn,mx-a[i]));
            }
        }
        if(!sorted){
            cout<<-1<<"\n";
        }
        else
        cout<<k<<"\n";
    }
}