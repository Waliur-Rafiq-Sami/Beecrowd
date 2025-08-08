#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned long long n;
    while (cin >> n)
    {
        if (n == static_cast<unsigned long long>(-1))
            return 0;
        if (n == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n - 1 << endl;
        }
    }

    return 0;
}