#include <iostream>
#include <cmath>
using namespace std;

double fib(int n)
{
    double r5 = sqrt(5);
    double a = (1 + r5) / 2.0;
    double b = (1 - r5) / 2.0;
    double s = (pow(a, n) - pow(b, n)) / r5;
    return s;
}

int main()
{
    int n;
    cin >> n;
    printf("%.1f\n", fib(n));

    return 0;
}