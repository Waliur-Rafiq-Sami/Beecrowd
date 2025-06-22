#include <iostream>
using namespace std;
int main()
{
    int a, b;
    double c;
    int x, y;
    double z;
    cin >> a >> b >> c >> x >> y >> z;
    cout << "VALOR A PAGAR: R$ ";
    printf("%.2lf\n", b * c + y * z);
    return 0;
}