#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, numbers;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            numbers.push_back(s[i]);
        }
    }
    sort(numbers.begin(), numbers.end());
    cout << numbers[0];
    for (int i = 1; i < numbers.length(); i++)
    {
        cout << "+" << numbers[i];
    }
}
