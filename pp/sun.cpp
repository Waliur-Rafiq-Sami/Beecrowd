// hjsunjida

#include <iostream>
using namespace std;
int main()
{
    string text = "hmm";

    cout << "Hi sunjida" << endl
         << endl;

    for (int i = 0; i < 100; i++)
    {
        cout << text;
        for (int j = 0; j < i; j++)
        {
            cout << text[1];
        }
        cout << endl;
    }

    return 0;
}