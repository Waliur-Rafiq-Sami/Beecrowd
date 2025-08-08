#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n, m;
        cin >> n >> m;
        int p = pow(n, m);
        int c = 0;
        while (p > 0)
        {
            c++;
            p /= 10;
        }
        cout << c << endl;
    }

    return 0;
}