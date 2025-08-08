#include <iostream>
using namespace std;

int main()
{
    string s1 = "x = 35";
    int k = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 39; j++)
        {
            if (i == 0 || i == 6)
            {
                cout << "-";
            }
            else if (j == 0 || j == 38)
            {
                cout << "|";
            }
            else
            {
                if (j >= 1 && j < 39 && i == 1 && s1.length() != k)
                {
                    cout << s1[k++];
                }
                else if (j >= 16 && j < 39 && i == 3 && s1.length() != k)
                {
                    cout << s1[k++];
                }
                else if (j >= 32 && j < 39 && i == 5 && s1.length() != k)
                {
                    cout << s1[k++];
                }
                else
                {
                    cout << " ";
                }
            }
        }
        k = 0;
        cout << endl;
    }
    return 0;
}