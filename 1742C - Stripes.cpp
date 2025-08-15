    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            vector<vector<char>> v(8, vector<char>(8));
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    cin >> v[i][j];
                }
            }
            bool redlast = false;
            for (int i = 0; i < 8; i++)
            {
                bool allR = true;
                for (int j = 0; j < 8; j++)
                {
                    if (v[i][j] != 'R')
                    {
                        allR = false;
                        break;
                    }
                }
                if (allR)
                {
                    redlast = true;
                    break;
                }
            }
            cout << (redlast ? "R" : "B") << endl;
        }
    }