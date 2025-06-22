#include <iostream>
using namespace std;
int main()
{
    string n;
    double a, b;
    cin >> n >> a >> b;
    // b = b * 100 / 15;
    // cout << b << endl;
    cout << "TOTAL = R$ ";
    printf("%.2lf\n", a + b * 15 / 100);
    return 0;
}