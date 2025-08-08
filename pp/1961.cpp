#include <iostream>
using namespace std;

int main()
{
    int h, n;
    cin >> h >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) > h)
        {
            cout << "GAME OVER" << endl;
            return 0;
        }
    }
    cout << "YOU WIN" << endl;

    return 0;
}