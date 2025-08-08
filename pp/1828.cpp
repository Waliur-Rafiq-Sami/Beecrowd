#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;

    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int x = 2; // default: tie

        if (s1 == s2)
        {
            x = 2; // tie
        }
        else if (
            (s1 == "tesoura" && s2 == "papel") ||
            (s1 == "papel" && s2 == "pedra") ||
            (s1 == "pedra" && s2 == "lagarto") ||
            (s1 == "lagarto" && s2 == "Spock") ||
            (s1 == "Spock" && s2 == "tesoura") ||
            (s1 == "tesoura" && s2 == "lagarto") ||
            (s1 == "lagarto" && s2 == "papel") ||
            (s1 == "papel" && s2 == "Spock") ||
            (s1 == "Spock" && s2 == "pedra") ||
            (s1 == "pedra" && s2 == "tesoura"))
        {
            x = 0; // Sheldon wins
        }
        else
        {
            x = 1; // Raj wins
        }

        cout << "Caso #" << ++i << ": ";
        if (x == 0)
            cout << "Bazinga!" << endl;
        else if (x == 1)
            cout << "Raj trapaceou!" << endl;
        else
            cout << "De novo!" << endl;
    }

    return 0;
}
