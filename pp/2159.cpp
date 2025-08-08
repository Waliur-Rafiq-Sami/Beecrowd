#include <iostream>
#include <math.h>
using namespace std;
double getL(double a)
{
    return a / log(a);
}
double getL2(double a)
{
    return (a * 1.25506) / log(a);
}

int main()
{
    int a;
    cin >> a;
    printf("%.1f %.1f\n", getL(a), getL2(a));
    return 0;
}