#include <iostream>
using namespace std;
int main()
{
    int inter = 0, gre = 0, draw = 0;
    int c = 0;

    int g1 = 0, g2 = 0;
    int option;
    while (true)
    {
        cin >> g1 >> g2;
        c++;

        if (g1 > g2)
        {
            inter++;
        }
        else if (g1 < g2)
        {
            gre++;
        }
        else
        {
            draw++;
        }
        cin >> option;
        if (option != 1)
        {
            break;
        }
    }
    for (int i = 0; i < c; i++)
    {
        cout << "Novo grenal (1-sim 2-nao)" << endl;
    }
    cout << c << " grenais\n"
         << "Inter:" << inter << "\nGremio:" << gre << "\nEmpates:" << draw << endl;

    if (inter > gre)
    {
        cout << "Inter venceu mais" << endl;
    }
    else if (inter < gre)
    {
        cout << "Gremio venceu mais" << endl;
    }
    else
    {
        cout << "Não houve vencedor" << endl;
    }

    return 0;
}