#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    int sD, h1, m1, s1;
    int sE, h2, m2, s2;
    string dummy;

    cin >> dummy >> sD;
    scanf("%d : %d : %d", &h1, &m1, &s1);

    cin >> dummy >> sE;
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int D = sE - sD;
    int h = h2 - h1;
    int m = m2 - m1;
    int s = s2 - s1;

    if (s < 0)
    {
        s += 60;
        m--;
    }
    if (m < 0)
    {
        m += 60;
        h--;
    }
    if (h < 0)
    {
        h += 24;
        D--;
    }

    cout << D << " dia(s)\n";
    cout << h << " hora(s)\n";
    cout << m << " minuto(s)\n";
    cout << s << " segundo(s)\n";

    return 0;
}
