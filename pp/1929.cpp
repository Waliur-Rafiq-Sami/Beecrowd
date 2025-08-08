#include <iostream>
using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a + b > c && a + c > b && b + c > a) ||
        (a + b > d && a + d > b && b + d > a) ||
        (a + c > d && a + d > c && c + d > a) ||
        (b + c > d && b + d > c && c + d > b))
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}