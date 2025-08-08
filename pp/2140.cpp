#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (true)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            break;
        }
        if (a == b)
        {
            cout << "possible" << endl;
            continue;
        }
        int dif = b - a;
        int arr[] = {2, 5, 10, 20, 50, 100};
        int x = 0;
        for (int i = 5; i >= 0; i--)
        {
            if (arr[i] <= dif)
            {
                x++;
                dif -= arr[i];
            }
        }
        if (!dif && x > 1)
        {
            cout << "possible" << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }
    }

    return 0;
}