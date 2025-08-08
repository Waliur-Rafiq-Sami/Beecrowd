#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    // Keep reading until end of file
    while (cin >> n)
    {
        int p1 = n / 3;
        int center = n / 2;

        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = p1; i < n - p1; i++)
        {
            for (int j = p1; j < n - p1; j++)
            {
                m[i][j] = 1;
            }
        }
        m[center][center] = 4;
        // Print the matrix
        for (int i = 0; i < n; i++)
        {
            m[i][i] = 2;
            m[i][n - i - 1] = 3;
            for (int j = 0; j < n; j++)
            {
                printf("%d", m[i][j]);
                // cout << m[i][j];
            }
            // cout << endl;
            printf("\n");
        }
        printf("\n");
        // cout << endl; // Blank line between test cases
    }

    return 0;
}
