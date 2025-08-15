    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        vector<vector<int>> v(3,vector<int>(3));
        vector<vector<int>> res(3,vector<int>(3));
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> v[i][j];
            }
        }
        res[0][0] = v[0][0] + v[0][1] + v[1][0];
        res[0][1] = v[0][0] + v[0][1] + v[0][2] + v[1][1];
        res[0][2] = v[0][1] + v[0][2] + v[1][2];
        res[1][0] = v[1][0] + v[2][0] + v[0][0] + v[1][1];
        res[1][1] = v[1][0] + v[1][1] + v[1][2] + v[0][1] + v[2][1];
        res[1][2] = v[1][2] + v[0][2] + v[1][1] + v[2][2];
        res[2][0] = v[1][0] + v[2][0] + v[2][1];
        res[2][1] = v[2][1] + v[2][0] + v[2][2] + v[1][1];
        res[2][2] = v[2][2] + v[2][1] + v[1][2];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (res[i][j] % 2 == 0)
                {
                    v[i][j] = 1;
                }
                else
                {
                    v[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << v[i][j];
            }
            cout << endl;
        }
    }