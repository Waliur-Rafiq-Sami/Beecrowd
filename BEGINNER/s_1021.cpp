#include <iostream>
using namespace std;
int main()
{
    double value;
    cin >> value;

    int n100 = 0;
    int n50 = 0;
    int n20 = 0;
    int n10 = 0;
    int n5 = 0;
    int n2 = 0;
    int n1 = 0;

    cout << "NOTAS:" << endl;
    int n = value;
    // cout << "n==" << n << endl;
    while (n > 0)
    {
        if (n >= 100)
        {
            n100++;
            n -= 100;
        }
        else if (n >= 50)
        {
            n50++;
            n -= 50;
        }
        else if (n >= 20)
        {
            n20++;
            n -= 20;
        }
        else if (n >= 10)
        {
            n10++;
            n -= 10;
        }
        else if (n >= 5)
        {
            n5++;
            n -= 5;
        }
        else if (n >= 2)
        {
            n2++;
            n -= 2;
        }
        else
        {
            n1++;
            n -= 1;
        }
    }

    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;
    // cout << n1 << " nota(s) de R$ 1.00" << endl;

    cout << "MOEDAS:" << endl;
    int m = value;
    double x = value - m;
    // cout << "n==" << x << endl;

    n50 = 0;
    n20 = 0;
    n10 = 0;
    n5 = 0;
    n2 = 0;

    int c = 0;
    while (x > 0)
    {
        c = 0;
        if (x >= 0.50)
        {
            n50++;
            x -= 0.50;
            c = 1;
        }
        else if (x >= 0.25)
        {
            n20++;
            x -= 0.25;
            c = 1;
        }
        else if (x >= 0.10)
        {
            n10++;
            x -= 0.10;
            c = 1;
        }
        else if (x >= 0.05)
        {
            n5++;
            x -= 0.05;
            c = 1;
        }
        else if (x >= 0.01 || x >= 0.009 || x >= 0.008)
        {
            n2++;
            x -= 0.01;
            c = 1;
        }
        if (c == 0)
        {
            break;
        }
    }

    cout << n1 << " moeda(s) de R$ 1.00" << endl;
    cout << n50 << " moeda(s) de R$ 0.50" << endl;
    cout << n20 << " moeda(s) de R$ 0.25" << endl;
    cout << n10 << " moeda(s) de R$ 0.10" << endl;
    cout << n5 << " moeda(s) de R$ 0.05" << endl;
    cout << n2 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}