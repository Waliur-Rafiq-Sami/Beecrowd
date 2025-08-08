#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a, b, c;
    while (n--)
    {
        cin >> a >> b >> c;
        if (c != 0)
            printf("%.2d:%.2d - A porta abriu!", a, b);
        else
            printf("%.2d:%.2d - A porta fechou!", a, b);
        cout << endl;
    }

    return 0;
}