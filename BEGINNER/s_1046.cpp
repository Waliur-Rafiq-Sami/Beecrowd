#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int h = 0;
    cin >> a >> b;

    if (a == b)
    {
        h = 24;
        cout << "O JOGO DUROU " << h << " HORA(S)" << endl;
        return 0;
    }
    if (a > b)
        b += 24;

    // cout << a << endl;
    // cout << b << endl;
    while (a != b)
    {
        h++;
        a++;
    }

    cout << "O JOGO DUROU " << h << " HORA(S)" << endl;
    return 0;
}