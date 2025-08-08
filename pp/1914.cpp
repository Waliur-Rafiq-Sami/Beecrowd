#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> s[i];
        }

        int a, b;
        cin >> a >> b;
        if ((a + b) % 2 == 0 && s[1] == "PAR" || (a + b) % 2 != 0 && s[1] == "IMPAR")
        {
            cout << s[0] << endl;
        }
        else
        {
            cout << s[2] << endl;
        }
    }

    return 0;
}