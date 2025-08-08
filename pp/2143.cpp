#include <iostream>
using namespace std;
int main()
{
    int t;
    while (true)
    {
        cin >> t;
        if (t == 0)
            break;
        int x = 0;
        while (t--)
        {
            cin >> x;
            if (x % 2 != 0)
                cout << 2 * x - 1 << endl;
            else
                cout << 2 * x - 2 << endl;
        }
    }

    return 0;
}