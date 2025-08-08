#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sumG = 0;
    int sumV = 0;
    while (n--)
    {
        char ch;
        int v;
        cin >> ch >> v;
        if (ch == 'G')
        {
            sumG += v;
        }
        else
        {
            sumV += v;
        }
    }
    if (sumV >= sumG)
    {
        cout << "A greve vai parar." << endl;
    }
    else
    {
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    }

    return 0;
}