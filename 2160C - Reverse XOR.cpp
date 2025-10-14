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
        int n;
        cin >> n;
        bool flag=false;
        for (int i = 1; i <= (1<<30); i++)
        {
            bitset<64> bin(i);
            string binary = bin.to_string();
            size_t firstOne = binary.find('1');
            if (firstOne != string::npos)
            {
                binary = binary.substr(firstOne);
            }
            reverse(binary.begin(),binary.end());
            ll opp=stoi(binary,nullptr,2);
            if((i^opp)==n){
                cout<<"YES\n";
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"NO\n";
        }
    }
}