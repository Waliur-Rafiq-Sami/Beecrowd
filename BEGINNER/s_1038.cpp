#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    if (x == 1)
        printf("Total: R$ %.2lf\n", 4.0 * y);
    else if (x == 2)
        printf("Total: R$ %.2lf\n", 4.50 * y);
    else if (x == 3)
        printf("Total: R$ %.2lf\n", 5.0 * y);
    else if (x == 4)
        printf("Total: R$ %.2lf\n", 2.0 * y);
    else if (x == 5)
        printf("Total: R$ %.2lf\n", 1.50 * y);

    return 0;
}