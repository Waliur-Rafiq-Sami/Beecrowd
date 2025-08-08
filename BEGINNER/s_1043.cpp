#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    // if the sum of the lengths of any two sides is greater than the length of the third side.

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Perimetro = ";
        printf("%.1lf\n", (a + b) + c);
    }
    else
    {
        cout << "Area = ";
        printf("%.1lf\n", 0.5 * (a + b) * c);
    }

    return 0;
}