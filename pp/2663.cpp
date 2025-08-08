#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int k;
    cin >> k;
    int count = 0;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int r = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = r;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int x = arr[--k];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
