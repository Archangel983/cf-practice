#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n;
    float total, present = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        present += arr[i];
    }
    total = 100 * n;
    cout << (present / total) * 100 << endl;
}