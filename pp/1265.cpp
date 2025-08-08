#include <iostream>
using namespace std;
int main()
{
    string st;
    getline(cin, st);

    if (st.length() <= 140)
    {
        cout << "TWEET" << endl;
    }
    else
    {
        cout << "MUTE" << endl;
    }

    return 0;
}