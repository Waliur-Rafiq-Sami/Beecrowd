#include <iostream>
using namespace std;
int main()
{
    string st;
    cin >> st;

    int count_1 = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == '1')
        {
            count_1++;
        }
    }
    if (count_1 % 2 == 0)
    {
        st.push_back('0');
    }
    else
        st.push_back('1');

    cout << st << endl;

    return 0;
}