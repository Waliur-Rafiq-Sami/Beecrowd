#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int v, n;
    cin >> v >> n;
    long long int x = v * n;
    for (int i = 10; i < 100; i += 10)
    {
        long long int c = ceil((x * i) / 100.0);
        if (i != 90)
        {
            cout << c << " ";
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}