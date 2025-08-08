#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b + c == a)
    {
        cout << "S" << endl;
        return 0;
    }
    cout << "N" << endl;

    return 0;
}