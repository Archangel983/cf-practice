#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    unordered_set<int> s;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    cout << (4 - s.size()) << endl;
}