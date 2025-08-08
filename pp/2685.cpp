#include <iostream>
using namespace std;
int main()
{

    int m;
    while (cin >> m)
    {
        while (m >= 360)
        {
            m -= 360;
        }
        if (m < 90)
        {
            cout << "Bom Dia!!" << endl;
        }
        else if (m < 180)
        {
            cout << "Boa Tarde!!" << endl;
        }
        else if (m < 270)
        {
            cout << "Boa Noite!!" << endl;
        }
        else
        {
            cout << "De Madrugada!!" << endl;
        }
    }

    return 0;
}