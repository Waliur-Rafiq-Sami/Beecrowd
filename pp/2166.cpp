#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int x, a;
    cin >> x;

    bool f = true;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        if (x > a)
        {
            cout << i + 1 << endl;
            f = false;
            break;
        }
        else
        {
            x = a;
        }
    }
    f &&cout << 0 << endl;
    return 0;
}