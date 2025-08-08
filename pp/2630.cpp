#include <iostream>
using namespace std;

int min_v(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }
    if (b < a && b < c)
    {
        return b;
    }
    if (c < a && c < b)
    {
        return c;
    }
    return a;
}
int max_v(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    if (b > a && b > c)
    {
        return b;
    }
    if (c > a && c > b)
    {
        return c;
    }
    return a;
}
int mean_v(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int eye_v(int a, int b, int c)
{
    double x = (a * 30.0) / 100.0;
    double y = (b * 59.0) / 100.0;
    double z = (c * 11.0) / 100.0;
    return x + y + z;
}

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (n--)
    {
        string st;
        cin >> st;
        int a, b, c;
        cin >> a >> b >> c;
        if (st == "min")
        {
            cout << "Caso #" << ++i << ": " << min_v(a, b, c)
                 << endl;
        }
        else if (st == "max")
        {

            cout << "Caso #" << ++i << ": " << max_v(a, b, c) << endl;
        }
        else if (st == "mean")
        {
            cout << "Caso #" << ++i << ": " << mean_v(a, b, c) << endl;
        }
        else if (st == "eye")
        {
            cout << "Caso #" << ++i << ": " << eye_v(a, b, c) << endl;
        }
    }
    return 0;
}