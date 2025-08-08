#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isS = true;
    int big = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (big == 0)
        {
            big = x;
        }
        if (big < x)
        {
            isS = false;
        }
    }
    if (isS)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}