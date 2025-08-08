#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string st;
        cin >> st;
        printf("%.2f\n", st.length() / 100.0);
    }

    return 0;
}