#include <iostream>
using namespace std;

void sf(int a, int b)
{
    // 0 - PROXYCITY
    // 1 - P.Y.N.G.
    // 2 - DNSUEY!
    // 3 - SERVERS
    // 4 - HOST!
    // 5 - CRIPTONIZE
    // 6 - OFFLINE DAY
    // 7 - SALT
    // 8 - ANSWER!
    // 9 - RAR?
    // 10 - WIFI ANTENNAS
    a + b == 0 && cout << "PROXYCITY" << endl;
    a + b == 1 && cout << "P.Y.N.G." << endl;
    a + b == 2 && cout << "DNSUEY!" << endl;
    a + b == 3 && cout << "SERVERS" << endl;
    a + b == 4 && cout << "HOST!" << endl;
    a + b == 5 && cout << "CRIPTONIZE" << endl;
    a + b == 6 && cout << "OFFLINE DAY" << endl;
    a + b == 7 && cout << "SALT" << endl;
    a + b == 8 && cout << "ANSWER!" << endl;
    a + b == 9 && cout << "RAR?" << endl;
    a + b == 10 && cout << "WIFI ANTENNAS" << endl;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int a, b;
        cin >> a >> b;
        sf(a, b);
    }

    return 0;
}