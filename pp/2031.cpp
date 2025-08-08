#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string p1, p2;
    while (n--)
    {
        cin >> p1 >> p2;
        if (p1 == "ataque")
        {
            p1 = "Airstrike";
        }
        else if (p1 == "pedra")
        {
            p1 = "Rock";
        }
        else
        {
            p1 = "Paper";
        }

        if (p2 == "ataque")
        {
            p2 = "Airstrike";
        }
        else if (p2 == "pedra")
        {
            p2 = "Rock";
        }
        else
        {
            p2 = "Paper";
        }

        if (p1 == p2)
        {
            if (p1 == "Airstrike")
            {
                cout << "Aniquilacao mutua" << endl;
            }
            else if (p1 == "Rock")
            {
                cout << "Sem ganhador" << endl;
            }
            else
            {
                cout << "Ambos venceram" << endl;
            }
        }
        else
        {

            if ((p1 == "Airstrike") ||
                (p1 == "Rock" && p2 == "Paper"))
            {
                cout << "Jogador 1 venceu" << endl;
            }
            else
            {
                cout << "Jogador 2 venceu" << endl;
            }
        }
    }
    return 0;
}