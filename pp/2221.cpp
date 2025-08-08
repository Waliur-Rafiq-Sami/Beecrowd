#include <iostream>
using namespace std;
int value(int a, int d, int b)
{
    return ((a + d) / 2) + b;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int B;
        int a1, b1, c1;
        int a2, b2, c2;
        cin >> B;
        cin >> a1 >> b1 >> c1;
        cin >> a2 >> b2 >> c2;
        int res1, res2;
        if (c1 % 2 == 0)
        {
            res1 = value(a1, b1, B);
        }
        else
        {
            res1 = value(a1, b1, 0);
        }

        if (c2 % 2 == 0)
        {
            res2 = value(a2, b2, B);
        }
        else
        {
            res2 = value(a2, b2, 0);
        }

        if (res1 < res2)
        {
            cout << "Guarte" << endl;
        }
        else if (res1 > res2)
        {
            cout << "Dabriel" << endl;
        }
        else
        {
            cout << "Empate" << endl;
        }
    }

    return 0;
}
