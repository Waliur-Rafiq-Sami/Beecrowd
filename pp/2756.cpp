#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    string s = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7 - i; j++)
        {
            cout << " ";
        }
        cout << s[i];
        if (i != 0)
        {
            for (int j = 0; j < (i + k); j++)
            {
                cout << " ";
            }
            k++;
            cout << s[i];
        }
        cout << endl;
    }
    k--;
    k--;
    for (int i = 3; i >= 0; i--)
    {
        for (int j = 0; j < 7 - i; j++)
        {
            cout << " ";
        }
        cout << s[i];
        if (i != 0)
        {
            for (int j = 0; j < (i + k); j++)
            {
                cout << " ";
            }
            k--;
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}