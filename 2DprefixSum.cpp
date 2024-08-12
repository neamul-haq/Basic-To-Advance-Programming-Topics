#include <bits/stdc++.h>
using namespace std;

int main()
{
    int B[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > 0)
                B[i][j] += B[i - 1][j];
            if (j > 0)
                B[i][j] += B[i][j - 1];
            if (i > 0 and j > 0)
                B[i][j] -= B[i - 1][j - 1];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<B[i][j] << " ";
        }
        cout << endl;
    }

}
