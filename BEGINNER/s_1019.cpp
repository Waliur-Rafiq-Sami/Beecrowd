#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h = 0, m = 0, c = 0;
    while (n > 0)
    {
        c = 0;
        if (n >= 3600)
        {
            n -= 3600;
            h++;
            c = 1;
        }
        else if (n >= 60)
        {
            n -= 60;
            m++;
            c = 1;
        }

        if (c == 0)
        {
            break;
        }
    }
    cout << h << ":" << m << ":" << n << endl;
    return 0;
}