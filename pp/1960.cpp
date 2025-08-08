#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    if (n == 999)
    {
        cout << "CMXCIX" << endl;
        return 0;
    }
    if (n >= 500)
    {
        s.push_back('D');
        n -= 500;
    }
    if (n >= 100)
    {
        for (int i = 0; i < n; i++)
        {
            if (n >= 100)
            {
                s.push_back('C');
                n -= 100;
            }
            else
            {
                break;
            }
        }
    }
    if (n >= 50)
    {
        for (int i = 0; i < n; i++)
        {
            if (n >= 50)
            {
                s.push_back('L');
                n -= 50;
            }
            else
            {
                break;
            }
        }
    }
    if (n >= 10)
    {
        for (int i = 0; i < n; i++)
        {
            if (n >= 10)
            {
                s.push_back('X');
                n -= 10;
            }
            else
            {
                break;
            }
        }
    }
    if (n >= 5)
    {
        for (int i = 0; i < n; i++)
        {
            if (n >= 5)
            {
                s.push_back('V');
                n -= 5;
            }
            else
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        s.push_back('I');
    }
    cout << s << endl;

    return 0;
}