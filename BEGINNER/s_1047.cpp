#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int m = d - b;
    int h = c - a;

    if (m < 0)
    {
        m = 60 + m;
        h--;
    }
    if (h < 0)
    {
        h += 24;
    }

    if (a == c && b == d)
    {
        h = 24;
        m = 0;
    }

    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;
    return 0;
}