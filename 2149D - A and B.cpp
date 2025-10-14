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
        string s;
        cin >> n >> s;
        vector<int> posa, posb;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                posa.push_back(i);
            }
            if (s[i] == 'b')
            {
                posb.push_back(i);
            }
        }
        if (posa.empty() || posb.empty())
        {
            cout << 0 << "\n";
            continue;
        }
        for (int i = 0; i < posa.size(); i++)
        {
            posa[i] -= i;
        }
        for (int i = 0; i < posb.size(); i++)
        {
            posb[i] -= i;
        }
        sort(posa.begin(), posa.end());
        sort(posb.begin(), posb.end());
        int mediana = posa[posa.size() / 2];
        int medianb = posb[posb.size() / 2];
        ll costa = 0, costb = 0;
        for (int i = 0; i < posa.size(); i++)
        {
            costa += (abs(posa[i] - mediana));
        }
        for (int i = 0; i < posb.size(); i++)
        {
            costb += (abs(posb[i] - medianb));
        }
        cout << min(costa, costb) << "\n";
    }
}
