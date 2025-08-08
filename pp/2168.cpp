#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n += 1;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        int z = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[i][j] == 1)
            {
                z++;
            }
            if (arr[i][j + 1] == 1)
            {
                z++;
            }
            if (arr[i + 1][j] == 1)
            {
                z++;
            }
            if (arr[i + 1][j + 1] == 1)
            {
                z++;
            }
            if (z >= 2)
            {
                cout << "S";
                z = 0;
            }
            else
            {
                z = 0;
                cout << "U";
            }
        }
        cout << endl;
    }
    return 0;
}