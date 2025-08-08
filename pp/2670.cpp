#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int A = b * 2 + 4 * c;
    int B = a * 2 + 2 * c;
    int C = a * 4 + b * 2;

    if (A <= B && A <= C)
        (cout << A << endl);
    else if (B <= A && B <= C)
        (cout << B << endl);
    else
        (cout << C << endl);
    return 0;
}