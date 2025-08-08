#include <iostream>
using namespace std;
int main()
{

    string a, b;

    int x = 0, seq = 0, pos = 0;
    while (cin >> a >> b)
    {
        seq = 0;
        pos = 0;
        for (int i = 0; i < b.length() - a.length() + 1; i++)
        {
            int c = 0;
            for (int j = 0; j < a.length(); j++)
            {
                if (b[i + j] == a[j])
                {
                    c++;
                    pos = i;
                }
                else
                {
                    break;
                }
            }
            if (c == a.length())
            {
                seq++;
            }
        }
        cout << "Caso #" << ++x << ":" << endl;
        if (seq != 0)
        {
            cout << "Qtd.Subsequencias: " << seq << endl
                 << "Pos: " << pos + 1 << endl
                 << endl;
        }
        else
        {
            cout << "Nao existe subsequencia" << endl
                 << endl;
        }
    }

    return 0;
}