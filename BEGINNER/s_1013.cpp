#include <iostream>
#include <math.h>
using namespace std;

int rmN(int a)
{
    if (a < 0)
    {
        return a - a - a;
    }
    return a;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "c = " << c << endl;
    // cout << endl;
    // cout << "abs a = " << rmN(a) << endl;
    // cout << "abs b = " << rmN(b) << endl;
    // cout << "abs c = " << rmN(c) << endl;
    int x = ((a + b + abs(a - b)) / 2);
    int f = ((x + c + abs(x - c)) / 2);

    cout << f << " eh o maior" << endl;

    return 0;
}