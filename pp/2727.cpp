#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string st;
        cin.ignore();
        getline(cin, st);

        int f = 0;
        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] == '.')
            {
                f++;
                cout << f << " ";
            }
            cout << endl;
            cout << endl;
        }
        cout << char(96 + f) << "  " << (96 + f) << endl;
    }
    return 0;
}