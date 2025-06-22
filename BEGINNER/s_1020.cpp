#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ano = 0, mes = 0, c = 0;
    while (n > 0)
    {
        c = 0;
        if (n >= 365)
        {
            n -= 365;
            ano++;
            c = 1;
        }
        else if (n >= 30)
        {
            n -= 30;
            mes++;
            c = 1;
        }

        if (c == 0)
        {
            break;
        }
    }

    // cout << h << ":" << m << ":" << n << endl;
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << n << " dia(s)" << endl;

    return 0;
}