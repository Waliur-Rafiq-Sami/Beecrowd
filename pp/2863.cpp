#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        double min = 0;
        double x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (i == 1)
            {
                min = x;
            }
            else if (min > x)
            {
                min = x;
            }
        }
        cout << min << endl;
    }

    return 0;
}