#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int v;
        cin >> v;
        if (s == "Thor")
        {
            cout << "Y" << endl;
        }
        else
            cout << "N" << endl;
    }

    return 0;
}