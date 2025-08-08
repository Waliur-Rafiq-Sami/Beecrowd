#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    int s1, s2;
    int f1, f2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                s1 = i;
                s2 = j;
            }
            if (arr[i][j] == 2)
            {
                f1 = i;
                f2 = j;
            }
        }
    }

    unsigned int x = s1 - s2;
    unsigned int z = f1 - f2;
    cout << x + z << endl;

    return 0;
}