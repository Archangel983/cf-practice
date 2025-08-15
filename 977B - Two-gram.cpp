#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    map<string, int> freq;
    for (int i = 0; i < n - 1; i++)
    {
        string two_gram = s.substr(i, 2);
        freq[two_gram]++;
    }
    string result;
    int maxi = 0;
    for (auto &pair : freq)
    {
        if (pair.second > maxi)
        {
            maxi = pair.second;
            result = pair.first;
        }
    }
    cout << result << endl;
}