#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int t = 0;
    if (arr[0] < arr[1])
    {
        for (int i = 0; i < n - 1; i++)
        {
            if ((i % 2 == 0 && arr[i] < arr[i + 1]) || (i % 2 == 1 && arr[i] > arr[i + 1]))
            {
                t = 1;
            }
            else
            {
                cout << 0 << endl;
                t = 0;
                break;
            }
        }
        if (t)
        {
            cout << 1 << endl;
        }
    }
    else if (arr[0] > arr[1])
    {
        for (int i = 0; i < n - 1; i++)
        {
            if ((i % 2 == 0 && arr[i] > arr[i + 1]) || (i % 2 == 1 && arr[i] < arr[i + 1]))
            {
                t = 1;
            }
            else
            {
                cout << 0 << endl;
                t = 0;
                break;
            }
        }
        if (t)
        {
            cout << 1 << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}