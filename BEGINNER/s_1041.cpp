#include <iostream>
using namespace std;
int main()
{
    double x1, x2;
    cin >> x1 >> x2;
    if (x1 == 0 && x2 == 0)
    {
        cout << "Origem" << endl;
    }
    else if (x1 == 0)
    {
        cout << "Eixo Y" << endl;
    }
    else if (x2 == 0)
    {
        cout << "Eixo X" << endl;
    }
    else if (x1 > 0 && x2 > 0)
    {
        cout << "Q1" << endl;
    }
    else if (x1 < 0 && x2 > 0)
    {
        cout << "Q2" << endl;
    }
    else if (x1 < 0 && x2 < 0)
    {
        cout << "Q3" << endl;
    }
    else if (x1 > 0 && x2 < 0)
    {
        cout << "Q4" << endl;
    }
    return 0;
}