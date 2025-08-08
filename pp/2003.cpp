#include <iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 7 && b < 60)
        {
            cout << "Atraso maximo: " << b << endl;
        }
        else
        {
            b = 0;
            cout << "Atraso maximo: " << b << endl;
            break;
        }
    }
    return 0;
}