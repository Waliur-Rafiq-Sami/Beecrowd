#include <iostream>
using namespace std;
int main()
{
    string s1 = "decimal";
    string s2 = "octal";
    string s3 = "Hexadecimal";
    int k = 0, L = 0, m = 0;
    int d = 0, o = 0, h = 0;
    for (int i = 0; i <= 19; i++)
    {
        for (int j = 0; j < 39; j++)
        {
            if (i == 0 || i == 2 || i == 19)
            {
                cout << "-";
            }
            else
            {
                if (i == 1 && j >= 3 && k < s1.length())
                {
                    cout << s1[k++];
                    continue;
                }
                if (i == 1 && j >= 15 && L < s2.length())
                {
                    cout << s2[L++];
                    continue;
                }
                if (i == 1 && j >= 25 && m < s3.length())
                {
                    cout << s3[m++];
                    continue;
                }
                if (j == 0 || j == 12 || j == 22 || j == 38)
                {
                    cout << "|";
                }
                else if (j == 6 || j == 7)
                {
                    if (j == 7 && d < 10)
                    {
                        cout << " " << d++;
                    }
                    else if (j == 6 && d >= 10)
                    {
                        cout << d++;
                    }
                }
                else if (j == 17 || j == 16)
                {
                    if (j == 16 && o < 8)
                    {
                        cout << " " << o++;
                    }
                    else if (j == 17 && o >= 10)
                    {
                        cout << o++;
                    }
                }
                else if (j == 30)
                {
                    if (h < 10)
                        cout << h++;
                    else if (h == 10)
                    {
                        cout << "A";
                        h++;
                    }
                    else if (h == 11)
                    {
                        cout << "B";
                        h++;
                    }
                    else if (h == 12)
                    {
                        cout << "C";
                        h++;
                    }
                    else if (h == 13)
                    {
                        cout << "D";
                        h++;
                    }
                    else if (h == 14)
                    {
                        cout << "E";
                        h++;
                    }
                    else if (h == 15)
                    {
                        cout << "F";
                        h++;
                    }
                }
                else
                {
                    cout << " ";
                }
            }
        }
        if (o == 8)
            o = 10;
        cout << endl;
    }

    return 0;
}