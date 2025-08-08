#include <iostream>
#include <cmath>
using namespace std;

// double x(int a)
// {
//     double s = 0;
//     for (int i = 0; i < a; i++)
//     {
//         s = (3 + (1 / ((6 + 1 / 6) / a)));
//     }
//     return s;
// }
double sum = 0;
double rec(int a)
{
    if (a--)
    {
        return sum;
    }
    return sum += (3 + (1 / ((6 + 1 / 6) / rec((6 + 1 / 6)))));
}

int main()
{
    int n;
    cin >> n;

    double s = 0;

    s = rec(n);

    printf("%.10lf\n", rec(n));

    return 0;
}