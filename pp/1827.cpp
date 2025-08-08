#include <iostream>
#include <vector>
#include <cstdio>
using std::cin;
using std::vector;

int main()
{
    int n = 0;
    while (cin >> n)
    {
        int p1 = n / 3;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            m[i][n - i - 1] = 3;
            m[i][i] = 2;
            for (int j = 0; j < n; j++)
            {
                if (i >= p1 && j >= p1 && i < n - p1 && j < n - p1)
                {
                    m[i][j] = 1;
                }
                m[n / 2][n / 2] = 4;
                // cout << m[i][j];
                printf("%d", m[i][j]);
            }
            printf("\n");
            // cout << endl;
        }
        printf("\n");
        // cout << endl;
    }

    return 0;
}