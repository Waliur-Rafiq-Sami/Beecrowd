#include <iostream>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    if (b % a == 0)
    {
        cout << "Sao Multiplos" << endl;
    }
    else
        cout << "Nao sao Multiplos" << endl;

    return 0;
}