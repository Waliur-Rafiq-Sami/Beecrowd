#include <iostream>
using namespace std;

int main()
{
    string a;
    int n = 0;
    while (cin >> a)
    {
        if (a == "caw")
        {
            cin >> a;
            cout << n << endl;
            n = 0;
        }
        else if (a == "--*")
        {
            n++;
        }
        else if (a == "-*-")
        {
            n += 2;
        }
        else if (a == "-**")
        {
            n += 3;
        }
        else if (a == "*--")
        {
            n += 4;
        }
        else if (a == "*-*")
        {
            n += 5;
        }
        else if (a == "**-")
        {
            n += 6;
        }
        else if (a == "***")
        {
            n += 7;
        }
    }

    return 0;
}