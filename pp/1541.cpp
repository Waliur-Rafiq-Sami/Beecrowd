#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int a, b, c;
    while (true)
    {
        cin >> a;
        if (a == 0)
            break;
        cin >> b >> c;
        double t = (a * b) / (c / 100.0);
        cout << int(sqrt(t)) << endl;
    };

    return 0;
}