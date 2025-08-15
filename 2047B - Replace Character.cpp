#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr[n];
        map<char, int> map;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            map[arr[i]]++;
        }
        char mostfrequent = '\0';
        int max = 0;
        for (auto it : map)
        {
            if (it.second > max)
            {
                max = it.second;
                mostfrequent = it.first;
            }
        }
        char replace = '\0';
        for (auto it : map)
        {
            if (it.second <= max && it.first != mostfrequent)
            {
                replace = it.first;
                break;
            }
        }
        for (auto &character : arr)
        {
            if (character == replace)
            {
                character = mostfrequent;
                break;
            }
        }
        for (auto character : arr)
        {
            cout << character;
        }
        cout << endl;
    }
}