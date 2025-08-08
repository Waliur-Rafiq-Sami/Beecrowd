#include <iostream>
using namespace std;
int main()
{
    string st;
    getline(cin, st);
    if (st.length() > 80)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;

    return 0;
}