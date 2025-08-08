#include <iostream>
using namespace std;

int main()
{
    double v, d;
    while (cin >> v >> d)
    {
        double r = d / 2;
        double a = 3.14 * r * r;
        double h = v / a;
        printf("ALTURA = %.2f\n", h);
        printf("AREA = %.2f\n", a);
    }

    return 0;
}