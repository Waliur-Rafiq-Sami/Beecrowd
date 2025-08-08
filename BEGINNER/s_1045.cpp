#include <iostream>
using namespace std;
int main()
{

    // if A ≥ B + C, write the message: NAO FORMA TRIANGULO
    // if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
    // if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
    // if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
    // if the three sides are the same size, write the message: TRIANGULO EQUILATERO
    // if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
    double a, b, c;
    cin >> a >> b >> c;

    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "c = " << c << endl;
    double A = 0, B = 0, C = 0;
    if (a <= b && a <= c)
    {
        if (b <= c)
        {
            // cout << a << endl
            //      << b << endl
            //      << c << endl;
            A = c;
            B = b;
            C = a;
        }
        else
        {
            // cout << a << endl
            //      << c << endl
            //      << b << endl;
            A = b;
            B = c;
            C = a;
        }
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
        {
            // cout << b << endl
            //      << a << endl
            //      << c << endl;
            A = c;
            B = a;
            C = b;
        }
        else
        {
            // cout << b << endl
            //      << c << endl
            //      << a << endl;
            A = a;
            B = c;
            C = b;
        }
    }
    else
    {
        if (a <= b)
        {
            // cout << c << endl
            //      << a << endl
            //      << b << endl;
            A = b;
            B = a;
            C = c;
        }
        else
        {
            // cout << c << endl
            //      << b << endl
            //      << a << endl;
            A = a;
            B = b;
            C = c;
        }
    }
    // cout << "A = " << A << endl;
    // cout << "B = " << B << endl;
    // cout << "C = " << C << endl;

    if (A >= (B + C))
        cout << "NAO FORMA TRIANGULO" << endl;
    else if ((A * A) > ((B * B) + (C * C)))
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if ((A * A) == ((B * B) + (C * C)))
        cout << "TRIANGULO RETANGULO" << endl;

    if ((A * A) < ((B * B) + (C * C)))
        cout << "TRIANGULO ACUTANGULO" << endl;
    if ((A == B) && (B == C))
        cout << "TRIANGULO EQUILATERO" << endl;

    if ((A == B) && (A != C) ||
        (B == C) && (A != C) ||
        (A == C) && (B != C))
        cout << "TRIANGULO ISOSCELES" << endl;
    return 0;
}
