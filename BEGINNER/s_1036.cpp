#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // (-b ± √(b² - 4ac)) / 2a.
    double a, b, c;
    cin >> a >> b >> c;

    int x = sqrt(b * b - 4 * a * c);
    if (a == 0 || x < 0)
    {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    double r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "R1 = ";
    printf("%.5lf\n", r1);
    cout << "R2 = ";
    printf("%.5lf\n", r2);

    return 0;
}