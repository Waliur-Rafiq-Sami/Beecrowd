#include <iostream>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    double res = ((b - a) / a) * 100;
    printf("%.2f%%\n", res);

    return 0;
}