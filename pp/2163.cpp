#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;

    int m[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }

    int x = 1;
    for (int i = 1; i < r - 1; i++)
    {
        for (int j = 1; j < c - 1; j++)
        {
            if (m[i][j] == 42 &&
                m[i - 1][j] == 7 &&
                m[i + 1][j] == 7 &&
                m[i][j - 1] == 7 &&
                m[i][j + 1] == 7 &&
                m[i - 1][j - 1] == 7 &&
                m[i - 1][j + 1] == 7 &&
                m[i + 1][j - 1] == 7 &&
                m[i + 1][j + 1] == 7)
            {
                cout << i + 1 << " " << j + 1 << endl;
                x = 0;
                break;
            }
        }
    }
    x &&cout << 0 << " " << 0 << endl;
    return 0;
}