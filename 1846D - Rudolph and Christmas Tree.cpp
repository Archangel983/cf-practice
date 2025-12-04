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
        double d, h;
        cin >> n >> d >> h;
        vector<double> a(n);
        for (auto &x : a)
            cin >> x;
        double total = 0.0;
        for (int i = 0; i < n; i++)
        {
            double area = (d * h) / 2.0;
            if (i > 0)
            {
                double diff = a[i] - a[i - 1];
                if (diff < h)
                {
                    double overlap = (d * (h - diff) * (h - diff)) / (2 * h);
                    area -= overlap;
                }
            }
            total += area;
        }
        cout << fixed << setprecision(7) << total << "\n";
    }
}