#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int n100 = 0;
    int n50 = 0;
    int n20 = 0;
    int n10 = 0;
    int n5 = 0;
    int n2 = 0;
    int n1 = 0;

    cout << n << endl;
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

    cout << n100 << " nota(s) de R$ 100,00" << endl;
    cout << n50 << " nota(s) de R$ 50,00" << endl;
    cout << n20 << " nota(s) de R$ 20,00" << endl;
    cout << n10 << " nota(s) de R$ 10,00" << endl;
    cout << n5 << " nota(s) de R$ 5,00" << endl;
    cout << n2 << " nota(s) de R$ 2,00" << endl;
    cout << n1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}