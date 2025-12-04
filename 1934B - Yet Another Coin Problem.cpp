#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans=LLONG_MAX;
        for(int one=0;one<=2;one++){
            for(int three=0;three<=1;three++){
                for(int six=0;six<=4;six++){
                    for(int ten=0;ten<=2;ten++){
                        ll sum=1*one+3*three+6*six+10*ten;
                        if(sum<=n && (n-sum)%15==0){
                            ans=min(ans,one+three+six+ten+(n-sum)/15);
                        }
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
}