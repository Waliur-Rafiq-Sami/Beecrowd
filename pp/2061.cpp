#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    string x;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        if (x == "fechou")
        {
            n++;
        }
        else
        {
            n--;
        }
    }
    cout << n << endl;
    return 0;
}