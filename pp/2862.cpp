#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x > 8000)
        {
            cout << "Mais de 8000!" << endl;
        }
        else
        {
            cout << "Inseto!" << endl;
        }
    }

    return 0;
}