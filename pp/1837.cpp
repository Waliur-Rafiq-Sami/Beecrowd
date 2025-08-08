#include <iostream>
using namespace std;
int main()
{
    int a, b, div, rem;
    cin >> a >> b;
    // if (a > 0)
    // {
    div = b;
    rem = a % b;
    // }
    // else
    // {
    //     div = a / b;
    //     rem = a % b;

    //     a = b * div + rem;
    //     cout << a << endl;
    //     cout << div << endl;
    //     cout << rem << endl;
    //     div = a / b;
    //     rem = a % b;
    // }
    cout << div << " " << rem << endl;

    return 0;
}