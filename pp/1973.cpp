#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr[i] -= 1;
            s = i + 1;
        }
        else
        {
            s++;
            int x = i;
            while (x--)
            {
                arr[i]--;
            }
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << s << " " << sum << endl;

    return 0;
}