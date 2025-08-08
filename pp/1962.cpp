#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        int res = 0, isN = 0;
        if (a < 2015)
        {
            res = 2015 - a;
            isN = 1;
        }
        else
        {
            res = a - 2014;
        }
        if (isN)
        {
            cout << res << " D.C." << endl;
        }
        else
        {
            cout << res << " A.C." << endl;
        }
    }

    return 0;
}