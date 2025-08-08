#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            cout << "Valido-Equilatero" << endl;
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Valido-Isoceles" << endl;
        }
        else
        {
            cout << "Valido-Escaleno" << endl;
        }
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            cout << "Retangulo: S" << endl;
        }
        else
        {
            cout << "Retangulo: N" << endl;
        }
    }
    else
    {
        cout << "Invalido" << endl;
    }

    return 0;
}