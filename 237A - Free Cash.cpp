#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count = 1,maxcnt=1;;
    cin >> n;
    int H,M;
    cin>>H>>M;
    for (int i = 0; i < n - 1; i++)
    {
        int h,m;
        cin>>h>>m;
        if (h == H && m==M)
        {
            count++;
            maxcnt=max(maxcnt,count);
        }
        else{
            count=1;
        }
        H=h;
        M=m;
    }
    cout << maxcnt << endl;
    return 0;
}   