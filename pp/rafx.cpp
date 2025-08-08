#include <iostream>
using namespace std;
int main()
{

    string a = "78954";
    string b = "7895478954789547895447895478954";

    int x = 0, seq = 0, pos = 0;

    for (int i = 0; i < b.length() - a.length() + 1; i++)
    {
        int c = 0;
        for (int j = 0; j < a.length(); j++)
        {
            if (b[i + j] == a[j])
            {
                c++;
                pos = i;
            }
            else
            {
                break;
            }
        }
        if (c == a.length())
        {
            seq++;
        }
        else
        {
            pos = 0;
        }
    }
    cout << seq << endl;
    cout << pos + 1 << endl;

    return 0;
}